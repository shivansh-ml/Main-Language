#include <iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,4,5};
    int B[5]={6,7,8,9,10};
    int C[10];
    int i;
    for (i=0;i<5;i++)
    {
        C[i]=A[i]+B[i];
        cout<<C[i]<<endl;
    }
    cout<<C[2]<<endl;
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int s[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter value of "<<i<<"th value of array\n";
        cin>>s[i];
    }
    return 0;
    
}
//used to represent a list