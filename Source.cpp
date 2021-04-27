#include <iostream>
#include "DateClass.h"
#include "Movie.h"
#include "Viewer.h"

using namespace std;

int main()
{
	int iStack = 5;

	int* piHeap = new int;
	*piHeap = 10;
	delete piHeap;
	piHeap = nullptr;

	double* pDbl = new double;
	*pDbl = 4;
	cout << *pDbl << endl;
	delete pDbl;
	pDbl = nullptr;


	Movie Matrix("The Matrix", 8.7, 1999, 9, 3);
	Matrix.ShowViewers();

	Viewer caner("Caner Taskin");
	Viewer tamer("Tamer Unal");

	Matrix.AddViewer(&caner);

	// This is possible, but needs a lot of copy/paste
	// caner.AddMovie(&Matrix);

	Matrix.AddViewer(&tamer);

	Matrix.ShowViewers();

	Movie LOTR("Lord of the Rings", 8.8, 2001, 12, 21);
	Viewer aybek("Aybek Korugan");

	LOTR.AddViewer(&aybek);
	LOTR.AddViewer(&caner);

	LOTR.ShowViewers();


	caner.ShowMovies();
	tamer.ShowMovies();
	aybek.ShowMovies();

	return 0;
}
