#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A(10);   
    for (int &x : A) cin >> x;
    for (int x : A) cout << x << " "; 
    //Finding single missing element in a sorted array for starting element with 1 for n natural number
    // int sum = A[9]*(A[9]+1)/2;
    // cout<<endl<<sum<<endl;
    // int sum1 = 0;
    // for(int i = 0;i<10;i++){
    //     sum1 = sum1 + A[i];
    // }
    // cout<<"The Missing Number is: "<<sum-sum1<<endl;
    //Finding single element for natural number where starting index is not 1
    // int diff = A[0];
    // int i = 0;
    // while(i<=10)
    // {
    //     if((A[i]-i)!=diff){
    //         cout<<"The missing number is: "<<i+diff<<endl;
    //         break;
    //     }
    //     i++;
    // }
    
    return 0;
}
