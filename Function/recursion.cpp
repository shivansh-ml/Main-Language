#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number you want to find the factorial of\n";
    cin >> num;
    int f = factorial(num);
    cout << "The factorial of the number is: " << f << '\n';
}
