#include "stdafx.h"
#include "Shape.h"


Shape::Shape()
{
	moveTo(0, 0);
}


Shape::Shape(int newX, int newY)
{
	moveTo(newX, newY);
}

int Shape::getX()	const
{
	return x;
}

int Shape::getY()	const
{
	return y;
}

void Shape::setX(int newX)
{
	x = newX;
}

void Shape::setY(int newY)
{
	y = newY;
}

void Shape::moveTo(int newX, int newY)
{
	setX(newX);
	setY(newY);
}

void Shape::rMoveTo(int deltaX, int deltaY)
{
	moveTo(getX() + deltaX, getY() + deltaY);
}
void Shape::display() const
{
}