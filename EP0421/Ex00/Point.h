#include <iostream>
#include <string>
using namespace std;

class Point{
    int x,y; // 8B
    public:
    void set(int x, int y){this -> x = x; this->y = y;}
    void showPoint(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};