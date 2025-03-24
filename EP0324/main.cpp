//2019675064 최범규
#pragma once
#include<iostream>
int main()
{
	cout<< "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n;
//Changed the variable name to rad Array from pArray
	Circle* radArray = new Circle[n];
	for(int i = 0; i < n; i++)
	{
		cout<< "원" << i+1 << ": "; // 프롬프트 출력
		cin>> radius; // 반지름 입력
		radArray[i]->setRadius(radius);
	}
	intcount =0; // 카운트 변수
	Circle * p = radArray;
	for(int i = 0; i < n; i++)
	{
		cout << "원의 면적 : " <<  p[i]->getArea() << endl;
	}
	cout<< endl<< "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	delete[] radArray;
}