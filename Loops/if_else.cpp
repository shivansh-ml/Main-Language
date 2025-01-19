#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter your marks\n";
    int marks;
    cin>>marks;
    if ((marks>40))
    {
        cout<<"Passed\n";
    }
    else if(marks==40)
    {
        cout<<"Barely Passed\n";
    }
    else
        cout<<"Failed";
}