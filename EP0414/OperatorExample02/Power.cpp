#include "Power.h"

Power::Power (int kick, int punch)
{
    this->kick = kick;
    this->punch = punch;
}
void Power::show()
{
    cout<<"kick=="<<kick<<",punch="<<punch<<endl;
}
Power Power::operator+(Power op2)
{
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}
Power& Power::operator+=(Power op2)
{
    kick += op2.kick;
    punch += op2.punch;
    return *this;

}
bool Power::operator ==(Power op2)
{
    if(this->kick == op2.kick && this->punch == op2.punch)
        return true;
    else
        return false;
}
Power& Power::operator++()
{
    kick++;
    punch++;
    return *this;
}
Power Power::operator++(int x)
{
    Power tmp = *this;
    kick++;
    punch++;
    return tmp;
};
Power operator+(int op1, Power op2)
{
    Power tmp;
    tmp.kick = op1+op2.kick;
    tmp.punch = op1+op2.punch;
    return tmp;
}
Power& Power::operator<<(int n)
{
    kick += n;
    punch += n;
    return * this;
}