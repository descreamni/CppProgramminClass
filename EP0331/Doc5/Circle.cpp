#include <iostream>
using namespace std;
class Circle {
    private:
    int radius; 
    public:Circle(); 
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14*radius*radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius;}; 
};
Circle::Circle() {
    radius = 1;cout<< "생성자실행radius = " << radius << endl;}

Circle::Circle(int radius){
    this->radius = radius;
    cout<< "생성자실행radius = "  << radius << endl;
}

Circle::~Circle() {
    cout<< "소멸자실행radius = " << radius << endl;
}