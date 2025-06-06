#pragma once
#include <iostream>
using namespace std;
class Person
{
    int id;
    char* name;
public:
    Person(int id, const char* name);
    Person(const Person& p);

    ~Person();
    void changeName(const char* name);
    void show()
    {
        printf_s("%d, %s\n", id, name);
    }
};