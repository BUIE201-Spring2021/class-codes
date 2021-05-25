#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
	height = 0;
	width = 0;
}

Rectangle::Rectangle(int h, int w)
{
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
