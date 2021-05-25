#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
{
	cout << "Square::Square()" << endl;
	length = 0;
}

Square::Square(int l)
{
	cout << "Square::Square(int l)" << endl;
	length = l;
}

void Square::Print()
{
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length; ++j)
			cout << "*";
		cout << endl;
	}
}
