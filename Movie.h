#pragma once
#include <string>
#include "DateClass.h"

using namespace std;

// Forward declaration
class Viewer;

class Movie
{
	string Name;
	double Score;

	DateClass ReleaseDate;

public:
	Movie(string NameIn, double ScoreIn, int YearIn, int MonthIn, int DayIn);

	void Print();
	void AddViewer(Viewer* pViewer);
};

