#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main(){
//     struct Rectangle r = {10, 5};
//     Rectangle *p = &r;//Struct is not mandatory to write in C++
//     r.length = 15;
//     //*p.length - will not work because C has higher precedence of . operator
//     p->length = 20;
//     cout << r.length << endl;
//     cout<<p->breadth<<endl;
    Rectangle *p;
    p=new Rectangle;

    p->length = 15;
    p->breadth = 5;
    cout<<p->breadth<<endl;
    cout<<p->length<<endl;
}