#include <iostream>
using namespace std;
class Student{
    private:
        int age;
    public:
        void setAge(int a){
            this->age = a;
        }
        int showAge(){
            return age;
        }
        Student(int age){
            setAge(age);
        }
};
int main(){
    Student s1(25);
    cout<<s1.showAge()<<endl;
}