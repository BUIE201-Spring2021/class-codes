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
