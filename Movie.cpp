#include "Movie.h"
#include "Viewer.h"
#include <iostream>

using namespace std;

// Initialization syntax
Movie::Movie(string NameIn, double ScoreIn, int YearIn, int MonthIn, int DayIn) : Name(NameIn), Score(ScoreIn), ReleaseDate(YearIn, MonthIn, DayIn)
{
}

// Assignment syntax
//Movie::Movie(string NameIn, double ScoreIn, int YearIn, int MonthIn, int DayIn)
//{
//	Name = NameIn;
//	Score = ScoreIn;
//
//	ReleaseDate.SetDate(YearIn, MonthIn, DayIn);
//}

void Movie::Print()
{
	cout << "Movie: " << Name << " has score: " << Score << endl;
	cout << "Release date: ";
	ReleaseDate.Print();
}

void Movie::AddViewer(Viewer* pViewer)
{
	cout << "Adding viewer to movie" << endl;
	cout << "Movie: " << endl;
	Print();

	cout << "Viewer: " << endl;
	pViewer->Print();	// Functionally equivalent to the next statement
	// (*pViewer).Print();

	Viewers.push_back(pViewer);
	pViewer->AddMovie(this);
}

void Movie::ShowViewers()
{
	cout << "Movie: " << endl;
	Print();

	if (Viewers.empty())
	{
		cout << "has no viewers :(" << endl;
	}
	else
	{
		cout << "has " << Viewers.size() << " viewers :)" << endl;

		// range-based loop
		for (auto pViewer : Viewers)
		{
			pViewer->Print();
		}

		// index-based for loop
		//for (int i = 0; i < Viewers.size(); ++i)
		//{
		//	Viewers[i]->Print();
		//}
	}
}
