#pragma once
#include <iostream>
using namespace std;

class MyVector
{
    int * p;
    int size;
    public :
    MyVector(int n = 100);
    ~MyVector();
};