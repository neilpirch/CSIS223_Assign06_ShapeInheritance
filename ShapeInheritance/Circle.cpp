#include "stdafx.h"
#include "Circle.h"
#include <iostream>
#include <iomanip>

using namespace std;

Circle::Circle()
{
	setRadius(1);
}


Circle::Circle(int newX, int newY, int newRadius)
	: Shape(newX, newY)
{
	setRadius(newRadius);
}

int Circle::getRadius()	const
{
	return radius;
}

void Circle::setRadius(int newRadius)
{
	radius = newRadius;
}
void Circle::display()	const
{
	cout << fixed << setprecision(3) << "Circle   : (" << setw(2) << getX() << ',' << setw(2) << getY() << ')'
		<< "  radius: " << setw(2) << getRadius() << "               area:" << setw(8) << getArea()
		<< "   perimeter:" << setw(8) << getPerimeter() << endl;
}
double Circle::getArea()		const
{
	return (radius * radius * PI);
}
double Circle::getPerimeter()	const
{
	return (2 * radius * PI);
}