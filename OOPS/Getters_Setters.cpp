#include <iostream>

/*
Abstraction = Hiding unnecessary data from outside a class
Getter = Function that makes a private attribute READABLE
Setter = Function that makes a private attribute WRITABLE
*/

using namespace std;

class Stove{
    // public:
    //     int temperature = 0;
    private:
        int temperature = 0;//Abstraction
    public:
        int getTemperature(){//Getter
            return temperature;
        }
        void setTemperature(int temp){//Setter
            this->temperature = temp;
        }
};
int main(){
    Stove stove;
    // stove.temperature = 100000;
    // cout<<stove.temperature<<endl;
    stove.setTemperature(100);
    cout<<stove.getTemperature()<<endl;
}