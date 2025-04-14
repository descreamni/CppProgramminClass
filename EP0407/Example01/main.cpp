#include "MyVector.h"
int main()
{
    MyVector * v1, *v2;
    v1 = new MyVector();
    v2 = new MyVector(1024);
    delete v1;
    delete v2;
}