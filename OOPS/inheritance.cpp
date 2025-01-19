#include <iostream>

/*
inheritance = A class can recieve attributes from another class.
              Children classes inhert from parent class.
              Helps to reuse similar code found within multiple classes.
*/

using namespace std;
class Animal{
    public:
        bool alive = true;
        void eat(){
            cout<<"The animal is eating\n";
        }
};
class Dog : public Animal{
    public:
        void bark(){
            cout<<"The dog is barking\n";
        }
};
int main(){
    Dog dog;
    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();
    return 0;
}