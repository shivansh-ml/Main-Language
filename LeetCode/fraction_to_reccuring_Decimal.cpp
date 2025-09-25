#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string result;
        // handle sign
        if ((numerator < 0) ^ (denominator < 0)) result += "-";

        // use long long to avoid overflow
        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);

        // integer part
        result += to_string(num / den);
        long long rem = num % den;
        if (rem == 0) return result;  // no fractional part

        result += ".";
        unordered_map<long long, int> seen; // remainder -> index in result

        while (rem != 0) {
            if (seen.find(rem) != seen.end()) {
                result.insert(seen[rem], "(");
                result += ")";
                break;
            }
            seen[rem] = result.size();
            rem *= 10;
            result += to_string(rem / den);
            rem %= den;
        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.fractionToDecimal(1, 2) << endl;     // "0.5"
    cout << sol.fractionToDecimal(2, 3) << endl;     // "0.(6)"
    cout << sol.fractionToDecimal(4, 333) << endl;   // "0.(012)"
    cout << sol.fractionToDecimal(1, 5) << endl;     // "0.2"
    cout << sol.fractionToDecimal(-50, 8) << endl;   // "-6.25"
    cout << sol.fractionToDecimal(7, -12) << endl;   // "-0.58(3)"
    return 0;
}
