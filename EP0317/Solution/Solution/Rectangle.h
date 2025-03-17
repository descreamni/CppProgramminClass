//2019675064 ÃÖ¹ü±Ô

#pragma once
#include <IOSTREAM>
class Rectangle
{
public:
	int width;
	int height;
	Rectangle();
	Rectangle(int, int);
	Rectangle(int);
	~Rectangle();

	double getArea();
	bool isSquare();
};