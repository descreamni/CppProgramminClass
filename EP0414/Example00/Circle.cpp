#pragma once
#include <iostream>
class Circle
{
    int radius;

    public:
    static int size;
    Circle(){ size ++;};
    ~Circle(){};
    static void Define(int param){size = param;};
    static void PrintSize(){printf_s("%d", size);};
};