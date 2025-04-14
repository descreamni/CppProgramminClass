#include <iostream>
#include "Circle.cpp"
void main()
{
    Circle::Define(0);
    Circle* circle1 = new Circle();
    Circle::PrintSize();
    printf_s("\n");
    Circle* circle2 = new Circle();
    Circle::PrintSize();
}