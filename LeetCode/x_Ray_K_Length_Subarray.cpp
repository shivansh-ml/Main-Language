#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        
        vector<int> freq(51, 0);

        for(int i = 0; i < k; ++i) {
            freq[nums[i]]++;
        }

        auto calcXsum = [&]() {
            vector<pair<int,int>> elements;
            for(int val = 1; val <= 50; val++) {
                if(freq[val] > 0) {
                    elements.push_back({val, freq[val]});
                }
            }

            sort(elements.begin(), elements.end(), [&](auto &a, auto &b) {
                if(a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });

            int sum = 0;
            int cnt = 0;
            for(auto &p : elements) {
                if(cnt == x) break;
                sum += p.first * p.second;
                cnt++;
            }
            return sum;
        };

        ans.push_back(calcXsum());

        for(int i = k; i < n; ++i) {
            freq[nums[i]]++;
            freq[nums[i - k]]--;
            ans.push_back(calcXsum());
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1,1,2,2,3,4,2,3};
    int k = 6;
    int x = 2;
    
    Solution sol;
    vector<int> result = sol.findXSum(nums, k, x);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}
