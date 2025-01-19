#include <iostream>
using namespace std;
class Pizza{
    public:
        string topping1;
        Pizza(){

        }
        Pizza(string topping1){
            this->topping1 = topping1;
        }
        Pizza(string topping1, string topping2){
            this->topping1 = topping1;
            this->topping1 = topping2;
        }
};
int main(){
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Pepperoni","Peppers");
    Pizza pizza3;
}
//multiple constructors with same name as long as parameters are different .