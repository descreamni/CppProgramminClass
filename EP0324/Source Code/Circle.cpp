#pragma once;
#include<iostream>
using namespace std;
#include "Circle.h"

Circle::Circle():Circle(1){

}
Circle::Circle(int r):radius(r)
{
    cout << "반지름이 " << radius << "인 원 생성"<<endl;
}
Circle :: ~Circle()
{
    cout <<"반지름" << radius << "인 원 소멸" << endl;
}
double Circle::getArea()
{
    return 3.14 * radius * radius; 
}
void Circle::setRadius(int r){
    radius = r;
}