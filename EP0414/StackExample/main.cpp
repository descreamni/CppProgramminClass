#include "Stack.h"
using namespace std;
void main()
{
    Stack stack(10);
    stack << 3 << 5 << 10;
    while(true)
    {
        if(!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;
    system("pause");
}