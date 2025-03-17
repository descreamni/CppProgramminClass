//2019675064 최범규
#include "Rectangle.h"
#include <iostream>

void GeneratedRectangleInstances();
void main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	std::cout << "예제 3-6\n"<<"사각형의 면적은" << rect.getArea() << std::endl;
	
	GeneratedRectangleInstances();

}

void GeneratedRectangleInstances()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	std::cout << "예제 3-6" << std::endl;
	if (rect1.isSquare()) std::cout << "rect1은 정사각형이다." << std::endl;
	if (rect2.isSquare()) std::cout << "rect2는 정사각형이다." << std::endl;
	if (rect3.isSquare()) std::cout << "rect3는 정사각형이다." << std::endl;

}