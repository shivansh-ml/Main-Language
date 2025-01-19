#include <iostream>
using namespace std;
template <typename T, typename u>
//T max(T x, u y)//We are returning T here
auto max(T x, u y)//We are returning auto i.e. compiler will deduce what output should be
{
    return (x > y) ? x : y;
}

int main()
{
    cout<<max(1,2.9)<<'\n';
}

//benefit is writing data type only once for different data type