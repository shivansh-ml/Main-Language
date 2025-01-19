#include <iostream>
using namespace std;
// Function to print array elements
// void fun(int A[], int n) {//Parameter is an array which can access a pointer
void fun(int *A, int n)
{ // Parameter is an array which can access a pointer
    // Use a traditional for loop to iterate over the array
    // cannot use for each loop on a pointer only on array
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << std::endl;
    }
}
int *fun1(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    return arr;
    delete arr;
}
int main()
{
    int A[5] = {2, 3, 6, 8, 10};
    fun(A, 5);
    int *ptr, sz=5;
    ptr = fun1(sz);
    for (int i = 0; i < sz; i++)
    {
        cout<<ptr[i]<<endl;
    }
}

//Array can only be passed by address