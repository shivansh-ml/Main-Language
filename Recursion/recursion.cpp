/*
Recursion has 2 stages- Ascending and Descending whereas any loop has only ascending phase
Eg-int fun(){
    1.Ascending Phase
    2.fun*2;
    3.Descending Phase
}
*/
#include <iostream>
using namespace std;
int fun(int i){
    if(i>0){
        cout<<i<<endl;//Tail Recursion
        fun(i-1);//It will not perform any other operation like fun(i-1)+n; because it is tail recursion 
    }
}
int fun1(int i){
    if(i>0){
        fun1(i-1);//Head Recursion
        cout<<i<<endl;
    }
}
int main(){
    cout<<"Recursive function with ascending phase\n";
    cout<<"-----------------\n";
    fun(5);
    cout<<"\n\n";
    cout<<"-----------------\n";
    cout<<"Recursive function with descending phase\n";
    cout<<"-----------------\n";
    fun1(5);
}