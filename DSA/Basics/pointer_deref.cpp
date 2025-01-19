#include <iostream>
using namespace std;

int main(){
    int a =20;
    int *p = &a;//Referring
    cout << "Value of a: "<< a << endl;
    cout << "Value of p: "<< p << endl;
    cout << "Value of a: "<< *p << endl;//DeRefrencing

    // int *P;
    // P = new int[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> P[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << P[i];
    // }
    int* P = new int[5];
    std::cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> P[i];
    }
    std::cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        std::cout << P[i] << " ";
    }
    std::cout << std::endl;

    cout<<sizeof(P)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
//Whatever the data type of pointer is, pointer takes same amount of memory
    // Don't forget to delete dynamically allocated memory
    delete[] P;
//     int *P;
// P = new (std::nothrow) int[5];
// if (P == nullptr) {
//     // Handle memory allocation failure
//     std::cerr << "Memory allocation failed." << std::endl;
//     return 1; // or some other error handling mechanism
// }

// Explanation

// The new operator attempts to allocate memory for an array of 5 integers.
// However, if the memory allocation fails (e.g., due to insufficient memory), new will throw a std::bad_alloc exception.
// To avoid this exception, we use new (std::nothrow) to return a null pointer instead of throwing an exception.
// We then check if the allocation was successful by verifying that P is not a null pointer.
// If the allocation fails, we handle the error accordingly.
// Best Practice

// Always check the result of memory allocation to ensure that it was successful.
// Use new (std::nothrow) to avoid exceptions and handle errors explicitly.
// Consider using smart pointers (e.g., std::unique_ptr) or containers (e.g., std::vector) to manage memory automatically.
    return 0;
}