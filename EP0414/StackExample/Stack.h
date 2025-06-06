#pragma once
#include <iostream>
#include <string>
class Stack
{
    int * stack;
    int size;
    int pointer;
    public:
    Stack(int size);
    ~Stack();
    Stack& operator<<(int x)
    {
        stack[pointer] = x;
        //printf_s("Pointer add :: %d || stack[%d] :: %d \n", pointer,pointer,stack[pointer]);
        pointer++;
        return *this;
    }
    Stack& operator>>(int& x)
    {
        int temp = pointer;
        pointer--;
        size--;
        x = stack[pointer];
        //printf_s("Pointer size :: %d || stack[%d] :: %d\n", pointer, pointer, x);
        return *this;
    }
    bool operator!()
    {
        if(pointer-1 < 0)
            return true;
        else if(pointer-1 >= size)
            return true;
        return false;
    }
};