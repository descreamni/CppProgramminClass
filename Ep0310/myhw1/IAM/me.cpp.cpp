// me.cpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "UserInfo.h"


void FirstSolution()
{
    std::cout << "소프트웨어학과\n25세\n최범규\n";
    //Prevent uncounsious shutdown in debugger
    system("pause");

}
int main()
{
    UserInfo* myProfile = new UserInfo("최범규", 25, "소프트웨어학과");
    myProfile->Print();
    delete myProfile;
}
