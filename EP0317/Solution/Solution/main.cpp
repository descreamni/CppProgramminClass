//2019675064 �ֹ���
#include "Rectangle.h"
#include <iostream>

void GeneratedRectangleInstances();
void main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	std::cout << "���� 3-6\n"<<"�簢���� ������" << rect.getArea() << std::endl;
	
	GeneratedRectangleInstances();

}

void GeneratedRectangleInstances()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	std::cout << "���� 3-6" << std::endl;
	if (rect1.isSquare()) std::cout << "rect1�� ���簢���̴�." << std::endl;
	if (rect2.isSquare()) std::cout << "rect2�� ���簢���̴�." << std::endl;
	if (rect3.isSquare()) std::cout << "rect3�� ���簢���̴�." << std::endl;

}