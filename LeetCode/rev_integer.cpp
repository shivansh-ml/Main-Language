#include <iostream>
#include <climits>
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit
            
            // Check for overflow before updating `rev`
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) {
                return 0; // Positive overflow
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) {
                return 0; // Negative overflow
            }
            
            rev = rev * 10 + pop;
        }
        return rev;
    }
};

int main() {
    Solution solution;
    std::cout << solution.reverse(-2147483648) << std::endl;
    return 0;
}
// overflow occurs when the result exceeds the range that can be represented by a double, resulting in positive infinity (HUGE_VAL).
//Condition for overflow
//Both the no is negative and the resultant is positive
//Both the no is positive and the resultant is negative
