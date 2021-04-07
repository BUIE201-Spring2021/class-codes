#include <iostream>
#include "DateClass.h"

using namespace std;

DateClass::DateClass()
{
	cout << "Default constructor DateClass::DateClass() was called" << endl;
	Year = 1970;
	Month = 1;
	Day = 1;
}

DateClass::DateClass(int YearIn, int MonthIn, int DayIn)
{
	cout << "Parametric constructor DateClass::DateClass(int YearIn, int MonthIn, int DayIn) was called" << endl;

	bool IsValid = SetDate(YearIn, MonthIn, DayIn);
	if (!IsValid)
	{
		Year = 1970;
		Month = 1;
		Day = 1;
	}
}

DateClass::~DateClass()
{
	cout << "Destructor DateClass::~DateClass was called" << endl;
}

bool DateClass::SetDate(int YearIn, int MonthIn, int DayIn)
{
	if (YearIn <= 0 || MonthIn <= 0 || DayIn <= 0)
	{
		cout << "All values must be positive!" << endl;
		return false;
	}
	// add more validation checks such as February, leap years ... 
	else
	{
		Year = YearIn;
		Month = MonthIn;
		Day = DayIn;
		return true;
	}
}

void DateClass::Print()
{
	cout << "The day is: " << Day << "/" << Month << "/" << Year << endl;
}
