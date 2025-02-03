#include <iostream>
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;

    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
double Iehomer(int x, int n)
{
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i = 1; i <= n; i++)
    {
        num*=x;den*=i;
        s+=num/den;
    }
    return s;
}
double ehomer(int x, int n){
    static int s = 1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x, n-1);
}
int main()
{
    cout << e(4, 10) << endl;
    cout << ehomer(2, 10) << endl;
    cout << Iehomer(4, 10) << endl;
}