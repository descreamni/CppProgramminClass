#pragma once
#include "Person.h"
#define CRT_NO_WARNING

void f(Person person){
    person.changeName("dummy");
}
Person g()
{
    Person mother(2, "Jane");
    return mother;
}

void main()
{
    Person father(1, "Kitae");
    Person son = father;
    father.show();
    son.show();

    f(father);
    g();
    system("pause");

/*
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ---" << endl;
    father.show();
    daughter.show();

    daughter.changeName("GyuHi");
    cout << "daughter 이름을 Grace로 변경한 후 ---"<<endl;
    father.show();
    daughter.show();
    system("pause");
    return;
    */
    // 오류남. 원인 : 얕은 복사를 했기 때문에 
    // 같은 주소를 가리키고 있다.
    // 즉, 아빠랑 딸이 한몸인거다.(읭?)
}