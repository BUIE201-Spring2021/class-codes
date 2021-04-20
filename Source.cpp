#include <iostream>
#include "DateClass.h"
#include "Movie.h"
#include "Viewer.h"

using namespace std;

int main()
{
	Movie Matrix("The Matrix", 8.7, 1999, 9, 3);
	Matrix.Print();

	Viewer caner("Caner Taskin");
	caner.Print();

	return 0;
}
