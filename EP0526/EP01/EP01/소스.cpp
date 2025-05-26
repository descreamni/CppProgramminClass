#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int n)
{
	cout << n << "";
}
int main(){
	vector<int> v = { 1,2,3,4,5 };
	for_each(v.begin(), v.end(), [](int n) {cout << n << ""; });


	/*
	double pi = 3.14;
	int sum = 0;
	[&sum](int x, int y) {sum = x + y; }(2,3);
	auto circleArea = [pi](double radius) {
		return pi * radius * radius;
		};
	auto add = [](int x, int y) {
		cout << x << "+" << y << "=" << x + y << endl;
		};
	cout << "반지름이 3인 원의 넓이" << circleArea(3) << endl;
	*/
}