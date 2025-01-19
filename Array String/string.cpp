#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name="Sj";
    std::string lp="Shivansh";
    cout<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<lp.substr(0,2)<<endl;
}