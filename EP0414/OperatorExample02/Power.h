#pragma once
#include<iostream>
using namespace std;
class Power{
    int kick;
    int punch;
    public:
    Power(int kick = 0, int punch = 0);
    void show();
    //이항
    Power operator+ (Power op2);
    bool operator == (Power op2);
    Power& operator += (Power op2);
    //단항항
    Power& operator ++();//전위연산
    Power operator++(int x);//후위연산
    friend Power operator+(int op1, Power op2);
    //참조를리턴하는 <<연산자
    Power& operator<<(int n);
    
};