#include "Stack.h"
Stack::Stack(int size)
{
    this->size = size;
    pointer = 0;
    stack = (int*)malloc(sizeof(int) * size);
};

Stack::~Stack()
{
    delete(stack);
}