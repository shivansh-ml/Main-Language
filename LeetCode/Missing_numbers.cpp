#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0; // XOR of all numbers from 0 to n
        int xor2 = 0; // XOR of all elements in nums
        
        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            xor1 ^= i;
        }
        
        // XOR all numbers in nums
        for (int num : nums) {
            xor2 ^= num;
        }
        
        // XOR both results to get the missing number
        return xor1 ^ xor2;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};
    Solution obj;
    cout << "Missing number is: " << obj.missingNumber(nums) << endl;
    return 0;
}
