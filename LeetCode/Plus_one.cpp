#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter no of digits in vectore(from MSB to LSB):";
    cin >> n;
    cout << "Enter the vector:";

    vector<int> digits(n);
    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << ",";
    }
    cout << endl;

     if (digits[digits.size() - 1] != 9)
    {
        digits[digits.size() - 1]++;
    }
    else
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }

        if (digits[0] == 0)
        {
            digits.insert(digits.begin(), 1);
        }
    }
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << ",";
    }
}