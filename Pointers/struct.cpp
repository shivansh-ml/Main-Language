#include <iostream>

struct student{
    std::string name;
    double gpa;//variable in a struct can be called members.
    bool enrolled = true;//we can set a default value
};

int main()
{
    student s1 = {"John", 3.5, true};
    student s2;
    s2.name = "Jane"; //Members can be accessed with "." i.e Class Member Acess Specifier.
    s2.gpa = 7.8;
    s2.enrolled = false;
    std::cout << s2.enrolled << std::endl; //Output is Zero.
}