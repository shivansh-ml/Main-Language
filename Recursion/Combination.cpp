#include <iostream>
using namespace std;
// Using iteration

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int C(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

int NCR(int n, int r){
    if (n == r|| r==0){
        return 1;
    }
    return NCR(n-1,r-1)+NCR(n-1,r);
}

int main(){
    cout<<C(4, 2)<<endl;
    cout<<NCR(4, 2)<<endl;
}
