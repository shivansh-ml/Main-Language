//Program to find Multiple Missing Elements in an array
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,6,7,8,12,13,14,16};
    int diff= a[0] - 0;
    for(int i=0;i<10;i++){
        if(a[i]-i!=diff){
            while(diff<a[i]-i){
                cout<<"The missing Number is :"<<i+diff<<endl;
                diff++;
            }
        }
    }
}