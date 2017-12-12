// ShapeInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Square.h"
#include <iostream>

using namespace std;

int main()
{
	Shape* figure[6];

	figure[0] = new Circle;
	figure[1] = new Circle(15, 25, 8);
	figure[2] = new Rect;
	figure[3] = new Rect(10, 20, 5, 6);
	figure[4] = new Square;
	figure[5] = new Square(25, 30, 12);

	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		figure[i]->display();
		figure[i]->rMoveTo(55, 65);
		figure[i]->display();
	}

	cout << endl;

	Rect*	rt = new Rect(0, 0, 20, 15);
	rt->display();
	rt->setWidth(55);
	rt->setHeight(30);
	rt->display();

	cout << endl;

	Square* sq = new Square(20, 20, 12);
	sq->display();
	sq->moveTo(15, 15);
	sq->setSide(18);
	sq->display();
	sq->setSide(10);
	sq->display();
	
	cout << endl;
	system("pause");
	return 0;
}

