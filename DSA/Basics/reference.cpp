#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    r++;
    cout << &r << endl;
    cout << r << endl;
    cout << a << endl;    
    cout << &a << endl;    

}
//Another name to a same variable, Useful for passing arguments to functions
//Conceptually refrence does not take memory