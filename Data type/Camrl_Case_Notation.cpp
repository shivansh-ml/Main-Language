#include <iostream>
using namespace std;
const int pi = 3.14159;

namespace first{
    int x = 5;
}
int main()
{
    int marksInMaths=63;
    //write cout<<mim then tab
    int x=1;
    cout<<x<<endl;
    cout<<first::x<<endl;
    cout<<"The marks of student in maths is "<<marksInMaths<<endl;
}