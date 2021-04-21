#include "Viewer.h"
#include "Movie.h"
#include <iostream>

using namespace std;

Viewer::Viewer(string NameIn) : Name(NameIn)
{
}

void Viewer::Print()
{
	cout << "Viewer Name: " << Name << endl;
}

void Viewer::AddMovie(Movie* pMovie)
{
	cout << "Adding to Viewer" << endl;
	Print();
	cout << "Movie" << endl;
	pMovie->Print();

	Movies.push_back(pMovie);
}

void Viewer::ShowMovies()
{
	cout << "Showing movies seen by Viewer" << endl;
	Print();

	if (Movies.empty())
	{
		cout << "Viewer has not seen any Movies" << endl;
	}
	else
	{
		for (auto pMovie : Movies)
			pMovie->Print();
	}
}