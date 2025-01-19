#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // void intialize(int l, int b)
    // {
    //     length = l;
    //     breadth = b;
    // }
    rectangle(int l, int b)//Constructor is used to intialize it at time of declaration
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changelength(int l)
    {
        length = l;
    }
};
int main(){
    rectangle r(10, 5);
    // r.intialize(10,5);
    r.area();
    r.changelength(20);
}