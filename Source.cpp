#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "NewSquare.h"

using namespace std;

int main()
{
	Rectangle r(5, 7);
	r.Print();

	Square s(4);
	s.Print();

	NewSquare ns(3);
	ns.Print();
}
