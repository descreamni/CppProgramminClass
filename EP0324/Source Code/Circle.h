#ifndef CIRCLE_H

class Circle{
    private:
    int radius;
    public :
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
    void setRadius(int r);
};
#define CIRCLE_H
#endif