#include <iostream>
using namespace std;
struct Car{
    string model;
    int year;
    string color = "Black";
};
void printCar(Car car);
void PrintCar(Car &car);
int main(){
    Car car1;
    Car car2;
    car1.model = "Toyota";
    car1.year = 2015;
    car2.model = "Honda";
    car2.year = 2010;
    car2.color = "Red";
    cout<<&car2<<endl;
    printCar(car1);//We generally pass by value and we create copies of the objects
    PrintCar(car2);//pass by reference
}
void printCar(Car car){
    cout<<car.model<<'\n';
    cout<<car.year<<'\n';
    cout<<car.color<<'\n';
}
void PrintCar(Car &car){
    cout<<&car<<endl;
    cout<<car.model<<'\n';
    cout<<car.year<<'\n';
    cout<<car.color<<'\n';
}