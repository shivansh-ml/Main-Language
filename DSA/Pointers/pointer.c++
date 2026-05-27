#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int *p;
    a = 10;
    p = &a;
    cout << "Value of a = " << a << "\n";
    cout << "Address of a = " << &a << "\n";
    cout << "Value stored in p (address of a) = " << p <<","<< p+1 << "\n";
    cout << "Address of pointer p itself = " << &p << "\n";
    cout << "Value pointed by p = " << *p << "\n";
    return 0;
}
/*
Pointers - variables that stores address of another variable
int a;
int *p;
p= &a;
cout << "Value pointed by p = " << *p << "\n"; // dereferencing (using the value stored in the variable whose address is stored in the pointer)
cout << "Size of pointer is 8 bytes in 64 bit system and 4 bytes in 32 bit system\n";

Pointer types - int* , char* , float* , double* etc
We have different pointer types because different data types have different sizes and we need to know how many bytes to read when dereferencing the pointer.
Typecasting --> (char*)p; // typecasting pointer to char* to read 1 byte at a time
If you want to store the address of that pointer p, you need a pointer that is one level higher. You declare this using two asterisks: int **q (pointer to pointer). This means that q is a pointer that stores the address of another pointer (p), which in turn stores the address of an integer (a). So, q points to p, and p points to a. To access the value of a using q, you would use **q, which dereferences q to get p, and then dereferences p to get the value of a.)
We use pointer to pointer when we want to modify the pointer itself (like changing where p points to) inside a function. If we pass a pointer to a function and we want to change the pointer's value (the address it points to), we need to pass a pointer to that pointer (int **q) so that we can modify the original pointer (p) inside the function.

Pointer as function arguments - we can pass pointer to a function to allow the function to modify the value of the variable passed by reference. This is useful when we want to return multiple values from a function or when we want to modify the value of a variable defined outside the function.
When a program starts the computer sets aside some memory for its execution. The applications memory is divided into heap , stack(stores local variables), static/global, code(text). Program can ask for more memory of heap during its execution.
Each function has a stack frame in stack.Whatever values are passed are copied there. If we pass a pointer to a function, we are passing the address of the variable, so the function can access and modify the variable directly using the pointer. This is more efficient than passing large structures or classes by value, as it avoids copying the entire data structure.
 
void modify(int *p) {
    *p = 20; // modifies the value of a through the pointer p
}
Pointer arithmetic - we can perform arithmetic operations on pointers. When we add an integer to a pointer, it moves the pointer by that many elements of the type it points to. For example, if p is an int* and we do p + 1, it will move the pointer to the next integer (4 bytes ahead in memory). If we do p + 2, it will move the pointer to the next next integer (8 bytes ahead in memory). This is because the size of an int is 4 bytes, so adding 1 to an int* moves it by 4 bytes, and adding 2 moves it by 8 bytes.
POINTERS ARE POWERFUL BUT DANGEROUS - they can lead to undefined behavior if not used carefully (like dereferencing a null pointer or a pointer that points to an invalid memory location). Always make sure to initialize pointers and check for null before dereferencing them.
Pointers are also used in dynamic memory allocation (using new and delete in C++) to allocate and deallocate memory on the heap. This allows us to create data structures that can grow or shrink in size during runtime, such as linked lists, trees, and graphs.
Pointer and Arrays - In C++, arrays and pointers are closely related. The name of an array is a pointer to its first element. For example, if we have an array int arr[5], then arr is a pointer to the first element of the array (arr[0]). We can use pointer arithmetic to access other elements of the array. For example, arr + 1 points to arr[1], arr + 2 points to arr[2], and so on. We can also use the dereference operator to access the value at a specific index, like *(arr + 1) to access arr[1]. This is why we can use both array indexing (arr[i]) and pointer arithmetic (*(arr + i)) to access elements of an array.
Arrays are passed as pointers to functions. When we pass an array to a function, we are actually passing a pointer to the first element of the array. This means that any modifications made to the array inside the function will affect the original array outside the function, since both the original array and the pointer inside the function point to the same memory location.
Array cannot drefrence or pointer arithmetic on multi-dimensional arrays - In C++, multi-dimensional arrays are stored in row-major order, which means that the elements of the array are stored in contiguous memory locations. However, when we declare a multi-dimensional array, we need to specify the size of all dimensions except the first one. This is because the compiler needs to know how many elements to skip when performing pointer arithmetic. For example, if we have a 2D array int arr[3][4], we can only perform pointer arithmetic on the first dimension (arr + 1 points to the next row), but we cannot perform pointer arithmetic on the second dimension (arr[0] + 1 does not point to the next element in the row). This is because the compiler does not know how many elements are in each row, so it cannot calculate the correct memory address for pointer arithmetic on the second dimension.
Stack Overflow - If we have a recursive function that calls itself indefinitely without a base case, it will keep adding stack frames until it exceeds the stack size limit, resulting in a stack overflow error. This can also happen if we have a very large local variable that exceeds the stack size limit. To avoid stack overflow, we should ensure that our recursive functions have a proper base case and that we do not allocate excessively large local variables.

new and delete - In C++, we can use the new operator to dynamically allocate memory on the heap for a variable or an array. For example, int *p = new int; allocates memory for a single integer and returns a pointer to it. We can also allocate memory for an array using new, like int *arr = new int[5]; which allocates memory for an array of 5 integers. When we are done using the dynamically allocated memory, we should free it using the delete operator to avoid memory leaks. For a single variable allocated with new, we use delete p; and for an array allocated with new, we use delete[] arr; to free the memory.
Pointer and dynamic memory allocation are fundamental concepts in C++ that allow us to manage memory efficiently and create complex data structures. However, they require careful handling to avoid issues such as memory leaks, dangling pointers, and undefined behavior. Always remember to free dynamically allocated memory and check for null pointers before dereferencing them to ensure the safety and stability of your programs.
int main() {
    int *p = new int; // dynamically allocate memory for an integer
    *p = 10; // assign a value to the allocated memory
    cout << "Value of p = " << *p << "\n"; // output the value stored at the allocated memory
    delete p; // free the allocated memory
    return 0;
}
Pointer as function return type - We can also return a pointer from a function. This is useful when we want to return a dynamically allocated array or a pointer to a local variable. However, we need to be careful when returning pointers to local variables, as they will go out of scope once the function returns, leading to undefined behavior if we try to access them. To avoid this, we can either return a pointer to dynamically allocated memory or use static variables inside the function.
int* createArray(int size) {
    int *arr = new int[size]; // dynamically allocate an array of integers
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // initialize the array with values 1, 2, ..., size
    }
    return arr; // return the pointer to the allocated array
}
int *add(int *a, int *b) {
    int *result = new int; // dynamically allocate memory for the result
    *result = *a + *b; // add the values pointed to by a and b and store in result
    return result; // return the pointer to the result
}
int *add(int a, int b) {
    int *result = new int; // dynamically allocate memory for the result
    *result = a + b; // add the values of a and b and store in result
    return result; // return the pointer to the result
}
Function pointer and callback functions - In C++, we can also have pointers to functions, which allow us to pass functions as arguments to other functions or store them in data structures. This is useful for implementing callback functions, where we want to specify a function to be called when a certain event occurs. We can declare a function pointer using the syntax: return_type (*pointer_name)(parameter_types); For example, void (*callback)(int) is a pointer to a function that takes an int parameter and returns void. We can assign a function to this pointer and call it like this: callback(5); which will call the function pointed to by callback with the argument 5.
Event Handling - In event-driven programming, we often use function pointers to handle events. For example, in a GUI application, we might have a button that triggers a callback function when clicked. We can set up the callback function using a function pointer, allowing us to define the behavior of the button click event dynamically at runtime.
Memory Leak - A memory leak occurs when we allocate memory on the heap but fail to free it after we are done using it. This can lead to a situation where the program consumes more and more memory over time, eventually exhausting the available memory and causing the program to crash. To avoid memory leaks, we should always ensure that we free any dynamically allocated memory using delete or delete[] when it is no longer needed. Additionally, using smart pointers (like std::unique_ptr or std::shared_ptr) can help manage memory automatically and prevent leaks by ensuring that memory is freed when it goes out of scope.
smart pointers (like std::unique_ptr or std::shared_ptr) - In C++, smart pointers are a type of wrapper around raw pointers that provide automatic memory management. They help prevent memory leaks by ensuring that the memory they manage is automatically freed when it is no longer needed. std::unique_ptr is a smart pointer that owns a resource exclusively, meaning that there can only be one unique_ptr pointing to a given resource. std::shared_ptr, on the other hand, allows multiple shared_ptr instances to point to the same resource, and it uses reference counting to determine when to free the resource. Using smart pointers can greatly reduce the risk of memory leaks and dangling pointers in C++ programs.
C++ does not automatically manage memory for you, so it is important to be mindful of how you allocate and deallocate memory when using pointers. Always remember to free any dynamically allocated memory and consider using smart pointers to help manage memory more safely and efficiently in your C++ programs.

*/