//2019675064 ÃÖ¹ü±Ô
#include "Rectangle.h"
#pragma once

Rectangle::Rectangle()
{
	width = 0;
	height = 0;
}
Rectangle::Rectangle(int x, int y)
{
	width = x;
	height = y;
}
Rectangle::Rectangle(int edge)
{
	width = edge;
	height = edge;
}

Rectangle::~Rectangle()
{
}

double Rectangle::getArea()
{
	return width * height;
}

bool Rectangle::isSquare()
{
	return (width == height) ? true : false;
}
