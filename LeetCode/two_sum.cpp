#include <vector>
#include <unordered_map>
#include <iostream>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Indices of the two numbers that add up to " << target << ": " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}