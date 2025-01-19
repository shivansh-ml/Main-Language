#include <iostream>
using namespace std;
int fun(int i){
    static int a = 0;
    if(i>0){
        a++;
        return fun(i-1)+a;
    }
    return 0;
}
int main(){
    cout<<fun(5)<<endl;
}