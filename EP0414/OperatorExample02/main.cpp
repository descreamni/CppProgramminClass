#include "Power.h"
int main()
{
    // Power a(3, 5), b(5, 7), c;
    // a.show();
    // b.show();
    // c.show();
    // c = a + b;
    // cout<<"덧셈결과"<<endl;
    // a.show();
    // b.show();
    // c.show();
    // if(c == a+b)
    // {
    //     cout<<"두 파워가 같다."<<endl;
    // }
    // else
    // {
    //     cout << "두 파워가같지 않다"<<endl;
    // }
    // a +=b;
    // a.show();
    // b.show();
    // ++a;
    // a.show();

    // Power a(3,5), b;
    // a.show();
    // b.show();
    // b = a++;
    // a.show();
    // b.show();
    // b = 2+a;
    // b.show();
    
    Power a(1,2);
    a << 3 << 5 << 6;
    a.show();
    system("pause");
    
}