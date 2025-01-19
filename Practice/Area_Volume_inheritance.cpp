#include <iostream>
using namespace std;
class Dimensions {
    public:
        double area;
        double volume;
};
class cube : public Dimensions {
    public:
        double side;
        cube(double side){
            this->side = side;
            this->area = side*side*6;
            this->volume = side*side*side;
        }
};
class Sphere : public Dimensions {
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4*3.14159*radius*radius;
            this->volume=radius*radius*radius;
        }
};
int main(){
    cube Cube(10.89);
    cout<<"Area: "<<Cube.area<<"cm\n";
    cout<<"Area: "<<Cube.volume<<"cm\n";
}