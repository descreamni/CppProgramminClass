#include "Rect.h"
#include <iostream>
using namespace std;
int main()
{
    Rect a(5,6), b(251,12);
    RectManager man;
    man.copy(a, b);
    if(man.equals(a,b))
    {
        cout << "같은 사각형" <<endl;
    }
    else
    {
        cout << "죽이고싶은 사각형"<<endl; 
    }
    system("pause");
}