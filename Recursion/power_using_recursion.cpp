#include <iostream>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return power(m, n - 1) * m;
}
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}
int main()
{
    cout << power(2, 5) << endl;
    cout << pow(2, 6) << endl;
}