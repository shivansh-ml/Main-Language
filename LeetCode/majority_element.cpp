#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        // Step 1: Find candidate
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            } 
            else if (nums[i] == candidate) {
                count++;
            } 
            else {
                count--;
            }
        }

        // Step 2 (Optional): Verify candidate (if majority not guaranteed)
        int verifyCount = 0;
        for (int num : nums) {
            if (num == candidate)
                verifyCount++;
        }

        if (verifyCount > nums.size() / 2)
            return candidate;
        else
            return -1; // In case there’s no strict majority
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << obj.majorityElement(nums) << endl;
    return 0;
}
