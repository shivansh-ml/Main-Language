/*
Typedef = reserved keyword used to create an additional name(alias) for another data type.
          New Indentifier for an existing type helps with readability and reduce typos.
          Replaced with usig keyword beacuse it works better with temperate
*/
#include <iostream>
#include <iomanip>

typedef std::string lapa;
using db=double;
int main()
{
    using namespace std;
    lapa str = "Hello, World!";
    db age=32.901821083;
    cout<<str<<endl;
    cout<<fixed<<setprecision(2)<<(age)<<endl;
}