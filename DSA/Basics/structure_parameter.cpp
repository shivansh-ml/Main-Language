#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

//Call By Value
// int area(Rectangle r1){
//     return r1.length * r1.breadth;
// }
//Call by Refrence
int area(Rectangle &r1){
    r1.length++;
    return r1.length * r1.breadth;
}
int main(){
    struct Rectangle r = {10,5};
    cout<<r.length<<endl;
    cout<<area(r)<<endl;
    cout<<r.length<<endl;
}