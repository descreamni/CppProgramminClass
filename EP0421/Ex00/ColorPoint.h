#pragma once
#include "Point.h"
#include <string>
using namespace std;
class ColorPoint : public Point{
    string color; // 24
    public:
    void setColor(string color) {this->color = color;}
    void showColorPoint();
};