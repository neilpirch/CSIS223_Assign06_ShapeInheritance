#include "stdafx.h"
#include "Rect.h"
#include <iostream>
#include <iomanip>

using namespace std;

Rect::Rect()
{
	setWidth(2);
	setHeight(1);
}


Rect::Rect(int newX, int newY, int newWidth, int newHeight)
	:Shape(newX, newY)
{
	setWidth(newWidth);
	setHeight(newHeight);
}

int Rect::getWidth()	const
{
	return width;
}

int Rect::getHeight()	const
{
	return height;
}

void Rect::setWidth(int newWidth)
{
	width = newWidth;
}
void Rect::setHeight(int newHeight)
{
	height = newHeight;
}
void Rect::display()	const
{
	cout << "Rectangle: (" << setw(2) << getX() << ',' << setw(2) << getY() << ')'
		<< "  width:  " << setw(2) << getWidth()
		<< "  height: " << setw(2) << getHeight() << "   area:" << setw(8) << getArea()
		<< "   perimeter:" << setw(8) << getPerimeter() << endl;
}
double Rect::getArea()		const
{
	return width * height;
}
double Rect::getPerimeter()	const
{
	return 2 * (width + height);
}