#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char name[10], dept[20];
	int sid;
	//Ű����κ��� �б�

	cout << "�̸� >> ";
	cin >> name;
	cout << "�й� >> ";
	cin >> sid;
	cout << "�а� >> ";
	cin >> dept;

	//���� ����
	ofstream fout("student.txt");
	if (!fout) {
		cerr << "������ �� �� �����ϴ�." << endl;
		return;
	}
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();

	ifstream fin;
	fin.open("student.txt");

	if (!fin) {
		cout << "���� ���� ����";
		return;
	}
	fin >> name;
	fin >> sid;
	fin	>> dept;

	cout << name << " " << sid << " " << dept << endl;
	fin.close();	
}