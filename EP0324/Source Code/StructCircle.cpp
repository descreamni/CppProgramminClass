#include <iostream>
struct StructCircle{
private:
int radius;
public:
StructCircle(int r){
    
}
double getArea();

};


inline double StructCircle :: getArea()
{
    return radius * radius * 3.14;
}
