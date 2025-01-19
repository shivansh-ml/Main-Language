#include <iostream>
//call by reference using reference variable
// void swap(std::string &x, std::string &y)
// {
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
//call by reference using pointer
void swap(std::string *x, std::string *y)
{
    std::string *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
}
//will not swap a and b
void swap1(std::string x, std::string y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    std::string x = "Kool Aid";
    std::string y = "Water";

    swap( x, y);
    swap1( x, y);

    std::cout<<" X: "<<x<<std::endl;
    std::cout<<" Y: "<<y<<std::endl;
}