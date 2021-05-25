#include "NewSquare.h"
#include <iostream>

using namespace std;

NewSquare::NewSquare()
{
	cout << "NewSquare::NewSquare()" << endl;
}

NewSquare::NewSquare(int l) : Rectangle(l, l)
{
	cout << "NewSquare::NewSquare(int l)" << endl;

	// Cannot access private fields
	// width = l;
	// height = l;
}

void NewSquare::Print()
{
	Rectangle::Print();

	cout << "NewSquare::Print()" << endl;
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
			cout << "+";
		cout << endl;
	}
}
