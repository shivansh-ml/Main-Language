#include <iostream>
using namespace std;
//class acts as blueprint to create object

class Human{
    public:
        string name;
        int age;
        string gender;
    
    void eat(){
        cout<<"Human is eating"<<endl;
    }
    void drink(){
        cout<<"Human is drinking"<<endl;
    }
};

int main()
{
    Human h1;
    h1.name = "John";
    h1.age = 25;
    h1.gender = "Male";
    h1.eat();
    cout<<h1.name<<endl;
    cout<<h1.age<<endl;
    cout<<h1.gender<<endl;
    h1.eat();
}