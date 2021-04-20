#include <iostream>
#include "DateClass.h"
#include "Movie.h"
#include "Viewer.h"

using namespace std;

int main()
{
	Movie Matrix("The Matrix", 8.7, 1999, 9, 3);
	Matrix.ShowViewers();

	Viewer caner("Caner Taskin");

	Viewer tamer("Tamer Unal");

	Matrix.AddViewer(&caner);
	Matrix.AddViewer(&tamer);

	Matrix.ShowViewers();
	return 0;
}
