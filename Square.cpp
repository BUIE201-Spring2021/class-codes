#include "Square.h"
#include <iostream>

using namespace std;

Square::Square()
{
	length = 0;
}

Square::Square(int l)
{
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
