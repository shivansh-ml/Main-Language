#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true; // Duplicate found
            }
            seen.insert(num);
        }
        return false; // No duplicates
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 1}; // Example input
    if (s.containsDuplicate(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
