#pragma once
#include "ColorPoint.h"
void main()
{
    ColorPoint cp;
    ColorPoint* pDer = &cp;
    Point* pBase = pDer;
    cout << sizeof(cp) << endl << sizeof(pBase) << endl;

    pDer->set(3,4);
    pBase->showPoint();
    pDer = (ColorPoint *)pBase;
    cout << sizeof(pDer)<<endl;
    system("pause");
}