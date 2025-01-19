#include <iostream>

using namespace std;

int main()
{
    int *pointer=nullptr;
    int x = 123;
    pointer = &x;
    if (pointer == nullptr)
    {
        cout<<"Address was not assigned\n";
    }
    else{
        cout<<"Address was assigned\n";
    }
}