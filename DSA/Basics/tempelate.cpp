#include <iostream>
using namespace std;
template <class T>
class Rectangle
{
private:
    T a;
    T b;

public:
    Rectangle(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T area();
    T perimeter();
};
template <class T>
T Rectangle<T>::area()
{
    return a * b;
}
template <class T>
T Rectangle<T>::perimeter()
{
    return 2 * (a + b);
}
int main()
{
    Rectangle<int> r1(5, 6);
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Perimeter: "<<r1.perimeter()<<endl;
    
    Rectangle<float> r2(5.89, 6.75);
    cout<<"Area: "<<r2.area()<<endl;
    cout<<"Perimeter: "<<r2.perimeter()<<endl;
}