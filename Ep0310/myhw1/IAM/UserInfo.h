#pragma once
#include "pch.h"
/*
DESCRIPTION
	This code is only to view the user profile
	FIELD
		name :: A target name
		age :: A target age
		department :: Belonging of the user
	METHOD
		Print() :: Printing it off the compiler 
*/
class UserInfo
{
private:
	std::string name;
	int age;
	std::string department;
public:
	UserInfo(std::string _name, int _age, std::string _department);
	void Print();
};

