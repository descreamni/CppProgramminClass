#include "MyVector.h"

MyVector::MyVector(int n)
{
    p = new int[n];
    size = n;
}
MyVector::~MyVector()
{
    delete[] p;
}
