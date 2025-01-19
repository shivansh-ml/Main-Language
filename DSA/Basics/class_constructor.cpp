#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() { length = breadth = 1; }         // Constructor
    Rectangle(int l, int b);                      // Constructor Overlod
    int area();                                   // facilitator-used to work on class
    int peri();                                   // facilitator-used to work on class
    int getLength() { return length; }            // getter
    void setLength(int l) { length = l; }         // setter
    ~Rectangle() { cout << "Destroyer" << endl; } // destroyer
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::peri()
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle r1(5, 6);
    cout << "Area " << r1.area() << endl;
    cout << "Perimeter " << r1.peri() << endl;
}