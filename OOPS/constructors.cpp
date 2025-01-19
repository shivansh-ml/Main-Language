#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;
    // Student(string name, int age, double gpa){
    //     this->name = name;
    //     this->age = age;
    //     this->gpa = gpa;
    Student(string x, int y, double z)
    {
        name = x;
        age = y;
        gpa = z;
    }
}
;
int main()
{
    // constructor-special method i.e. automatically called when an object is instantiated useful for assigning values to attributes aa arguments
    // constructor can be overloaded
    Student student1("SpongeBob", 25, 3.2);
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;
}