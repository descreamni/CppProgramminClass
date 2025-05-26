#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char name[10], dept[20];
	int sid;
	//키보드로부터 읽기

	cout << "이름 >> ";
	cin >> name;
	cout << "학번 >> ";
	cin >> sid;
	cout << "학과 >> ";
	cin >> dept;

	//파일 열기
	ofstream fout("student.txt");
	if (!fout) {
		cerr << "파일을 열 수 없습니다." << endl;
		return;
	}
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();

	ifstream fin;
	fin.open("student.txt");

	if (!fin) {
		cout << "파일 열기 오류";
		return;
	}
	fin >> name;
	fin >> sid;
	fin	>> dept;

	cout << name << " " << sid << " " << dept << endl;
	fin.close();	
}