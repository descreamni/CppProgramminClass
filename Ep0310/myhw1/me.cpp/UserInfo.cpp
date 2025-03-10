#include "UserInfo.h"

UserInfo::UserInfo(std::string _name, int _age, std::string _department)
{
	name = _name;
	age = _age;
	department = _department;
}

void UserInfo::Print()
{
	printf_s("%s\n"
		"\%d\n"
		"%s\n", name.c_str(), age, department.c_str());
	//Prevent uncounsious shutdown in debugger
	system("pause");
}

