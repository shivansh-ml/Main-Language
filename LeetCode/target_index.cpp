#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return 0;

        int low = 0, high = n - 1;

        for (; low <= high; ) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        // If not found, 'low' will be the correct insert position
        return low;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int result = obj.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}
