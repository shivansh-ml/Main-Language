#include <iostream>
using namespace std;

double getTotal(double price[], int);

int main()
{
    double price[5] = {10.0, 20.0, 30.89 , 75.01 , 32.0};
    int size = sizeof(price)/sizeof(price[0]);
    double total = getTotal(price, size);
    cout << "Total price is: " << total << endl;
    return 0;
}
double getTotal(double price[], int size)
{
    double total=0;
    for(int i = 0; i < size; i++) {
       total+=price[i]; 
    }
    return total;
}
//When we pass an array to a function it decays into a pointer and the program doesnt know its size
//So we need to pass the size of the array as well
