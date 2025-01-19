// double every second digit from R to L if doubled  number is 2 digits, split them and add odd no digits
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int sum = 0;
    int i = 1; // Counter to track digit position
    int sumodd=0;
    while (num != 0)
    {
        int digit = num % 10; // Extract the rightmost digit
        if (i % 2 == 0) // Check if it's a second digit
        {
            int doubled = digit * 2; // Double the digit
            if (doubled < 10)
            {
                sum += doubled; // Add directly if single-digit
            }
            else
            {
                // Split and add if double-digit
                sum += (doubled % 10) + (doubled / 10);
            }
        }
        else
        {
            sumodd += digit; // Add non-second digits directly
        }
        i++; // Increment counter
        num = num / 10; // Move to the next digit (left)
    }
    cout << "Sum of double every second digit from R to L and odd no digits: " << sum+sumodd << endl;
}