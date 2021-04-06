#include <iostream>
using namespace std;

// Date
// Year, Month, Day

struct Date
{
	int Year;
	int Month;
	int Day;
};

// call-by-value
// function parameters are local variables
void PrintDate(Date theDate)
{
	cout << "Before modification the day is: " << theDate.Day << "/" << theDate.Month << "/" << theDate.Year << endl;
	theDate.Year++;
	cout << "Next year's date is: " << theDate.Day << "/" << theDate.Month << "/" << theDate.Year << endl;
}

// public:	freely accessible
// private: only internal access
// protected: later
class DateClass
{
	// Data fields
	int Year;
	int Month;
	int Day;

public:
	DateClass();	// Constructor
	DateClass(int YearIn, int MonthIn, int DayIn);

	bool SetDate(int YearIn, int MonthIn, int DayIn);
	void Print();
};

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

void PrintDate(int Year, int Month, int Day)
{
	cout << "The day is: " << Day << "/" << Month << "/" << Year << endl;
}

int main()
{
	int Year = 2021;
	int Month = 4;
	int Day = 6;

	PrintDate(Year, Month, Day);

	Date today;
	// Date -> an abstaction, an idea, a definition
	// today -> an instance of Date
	today.Year = 2021;
	today.Month = 4;
	today.Day = 6;

	PrintDate(today);

	Date tomorrow = today;
	tomorrow.Day++;
	PrintDate(tomorrow);

	// Class -> definition
	// Object -> instances
	DateClass todayObject;
	// Directly accessing fields is not permitted. 
	// Data encapsulation / Data hiding
	//todayObject.Year = 2021;
	//todayObject.Month = 4;
	//todayObject.Day = 6;
	todayObject.Print();
	bool Success = todayObject.SetDate(2021, -4, 6);
	bool Success2 = todayObject.SetDate(2021, 4, 6);
	todayObject.Print();

	DateClass tomorrowObject(2021, 4, 7);
	tomorrowObject.Print();

	return 0;
}
