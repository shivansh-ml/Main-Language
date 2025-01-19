#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    int rev = 0;
    while(num!=0)
    {
        int a =num%10;
        rev = rev*10 + a;
        num = num/10;
    }
    cout<<"The Reverse of the Number is: "<<rev;
}