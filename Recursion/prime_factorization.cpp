// program to print prime factors of a number
#include <iostream>
using namespace std;
int prime_factorisation(int n)
{
    int a[n];
    int count = 0;
    if (n == 0 || n == 1)
    {
        cout << "Cannot be prime factorised";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                a[count]=i;
                count++;
            }
        }
    }
    for(int i =0;i<count;i++){
        cout<<a[i]<<endl;
    }
    for(int j = 0;j<count;j++){
       
    }
}

int main(){
    prime_factorisation(120);
}