#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
	cout << "Rectangle::Rectangle()" << endl;

	height = 0;
	width = 0;
}

Rectangle::Rectangle(int h, int w)
{
	cout << "Rectangle::Rectangle(int h, int w)" << endl;

	height = h;
	width = w;
}

void Rectangle::Print()
{
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
			cout << "*";
		cout << endl;
	}
}
