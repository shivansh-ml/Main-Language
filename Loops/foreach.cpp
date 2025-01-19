//Loop that eases the traversal over an iterable data set like array

#include <iostream>
using namespace std;

int main()
{
    string students[]={
        "John",
        "Mary",
        "Spongebob"
    };
    for(string std : students){
        cout << std << endl;
    }
}