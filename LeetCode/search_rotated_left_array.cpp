#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums, 0, nums.size() - 1, target);
    }

private:
    int BinarySearch(vector<int>& nums, int start, int end, int target) {
        if (start > end) return -1;

        int mid = (start + end) / 2;

        if (nums[mid] == target) return mid;

        if (nums[start] <= nums[mid]) {
            if (target >= nums[start] && target < nums[mid])
                return BinarySearch(nums, start, mid - 1, target);
            else
                return BinarySearch(nums, mid + 1, end, target);
        } else {
            if (target > nums[mid] && target <= nums[end])
                return BinarySearch(nums, mid + 1, end, target);
            else
                return BinarySearch(nums, start, mid - 1, target);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int index = sol.search(nums, target);
    cout << index << endl;
    return 0;
}
