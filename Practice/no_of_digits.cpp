#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    int i = 0;
    while (num!=0)
    {
        num = num/10;
        i++;
    }
    cout<<"No of digits are: "<<i;
}
