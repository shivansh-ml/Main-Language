//2 or more function keep calling each other

#include <iostream>
using namespace std;
void funB(int n);//To be declared first so funA can use it
void funA(int n){
    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<endl;
        funA(n/2);
    }
}
int main(){
    funA(20);
    
}