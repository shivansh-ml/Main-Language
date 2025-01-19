#include <iostream>
using namespace std;

// Iterative way

// int main()
// {
//     int n0 = 0;
//     int n1 = 1;
//     int count;
//     cout << "Enter the number of sequence you want to see\n";
//     cin >> count;
//     cout << n0 << endl;
//     cout << n1 << endl;
//     int c;
//     for (int i = 0; i < count; i++)
//     {
//         c = n0 + n1;
//         n0 = n1;
//         n1 = c ; 
//         cout << c << endl;
//     }
// }

//Recursive way

// int fibonacci(int n)
// {
//     if(n<=1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main()
// {
//     cout<<"Enter the nth terms you want to see"<<endl;
//     int count;
//     cin>>count;
//     cout<<fibonacci(count)<<endl;
// }

#include <iostream>
using namespace std;

// Function to print Fibonacci series recursively
void printFibonacci(int n, int a = 0, int b = 1) {
    if (n <= 0) {
        return; // Base case: if n is 0 or negative, do nothing
    }
    cout << a << " "; // Print the current Fibonacci number
    printFibonacci(n - 1, b, a + b); // Recursive call with updated values
}

int main() {
    cout << "Enter the number of terms you want to see in the Fibonacci series: ";
    int count;
    cin >> count; // User input for the number of terms
    cout << "Fibonacci series: ";
    printFibonacci(count); // Call the recursive function
    cout << endl; // New line for better output formatting
    return 0;
}