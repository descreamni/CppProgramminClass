#include "Person.h"
Person::Person(int id, const char* name)
{
    this->id = id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
    printf_s("%s의 생성자 실행\n", name);

}
Person::Person(const Person& p)
{
    this->id = p.id;
    int len = strlen(p.name);
    this->name = new char[len + 1];
    strcpy(this->name, p.name);
    printf_s("%s의 생성자 실행\n", p.name);
}
Person::~Person()
{
    if(name)
        delete[] name;
    printf_s("%s의 소멸자 실행\n", name);
}
void Person::changeName(const char* name)
{
    if(strlen(name) > strlen(this->name))
        return;
    strcpy(this->name, name);
}