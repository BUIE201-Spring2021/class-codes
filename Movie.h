#pragma once
#include <string>
#include "DateClass.h"

using namespace std;

class Movie
{
	string Name;
	double Score;

	DateClass ReleaseDate;

public:
	Movie(string NameIn, double ScoreIn, int YearIn, int MonthIn, int DayIn);

	void Print();
};

