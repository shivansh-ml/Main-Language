#include <iostream>
#include <cmath>

class Solution {
public:
    double myPow(double x, int n) {
        // Handle case where x = 0 and n is negative (undefined behavior)
        if (x == 0.0 && n < 0) {
            return 0.0;  // Return 0 as a safe fallback
        }

        // Compute power
        double result = pow(x, n);

        // Handle overflow: pow(x, n) returns HUGE_VAL in case of overflow
        if (result == HUGE_VAL || result == -HUGE_VAL) {
            return 0.0;  // Indicating overflow by returning 0
        }

        // Handle underflow: very small values may round to zero
        if (result == 0.0 && x != 0.0) {
            return 0.0;  // Indicating underflow
        }

        return result;
    }
};

int main() {
    Solution sol;
    std::cout << sol.myPow(2.0, 31) << std::endl;   // Large exponent (overflow case)
    std::cout << sol.myPow(0.1, -1000) << std::endl; // Small base, large negative exponent (underflow)
    std::cout << sol.myPow(-2.0, 10) << std::endl;  // Even exponent, normal case
    std::cout << sol.myPow(0, -5) << std::endl;     // Undefined case
    std::cout << sol.myPow(-1, 2147483647) << std::endl; // Edge case: large odd exponent
    return 0;
}
