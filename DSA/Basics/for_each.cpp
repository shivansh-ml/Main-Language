#include <iostream>

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int A[n]; // Note: This is not standard C++ and may not work on all compilers

    std::cout << "Enter the values of the array: ";
    int* ptr = A;
    for (int i = 0; i < n; ++i) {
        std::cin >> *ptr;
        ptr++;
    }

    std::cout << "The array is: \n";
    for (int x : A) {
        std::cout << x << std::endl;
    }

    return 0;
}