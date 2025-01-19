#include <iostream>
using namespace std;

// defining the default arguments
void display(char c = '*', int count = 3) {
    for(int i = 1; i <= count; ++i) {
        cout << c;
    }
    cout << endl;
}

int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display(); 
    
    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#'); 
    
    cout << "Both argument passed: ";
    // $, 5 will be parameters
    display('$', count); 

    return 0;
}

// Once we provide a default value for a parameter, all subsequent parameters must also have default values.

// If we are defining the default arguments in the function definition instead of the function prototype, then the function must be defined before the function call.
