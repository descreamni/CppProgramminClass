#include <iostream>
using namespace std;
class Adder
{
protected:
int add(int a, int b){return a + b;}

};
class Subtractor{
    protected:
    int minus(int a, int b) { return a - b;}
};

class Calculator : public Adder, public Subtractor
{
    public :
        int calc(char op, int a, int b){
            int res =0;
            switch(op)
            {
                case '+':
                {
                    res = add(a, b);
                    break;
                }
                case '-':
                {
                    res = minus(a, b);
                    break;
                }
            }
        }
};

void main(){
    Calculator handCalc;
    handCalc.calc('+', 2, 4);
    handCalc.calc('-', 4, 2);
}