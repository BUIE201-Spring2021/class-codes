#include "Movie.h"

Movie::Movie(string NameIn, double ScoreIn, int YearIn, int MonthIn, int DayIn)
{
	Name = NameIn;
	Score = ScoreIn;

	ReleaseDate.SetDate(YearIn, MonthIn, DayIn);
}
