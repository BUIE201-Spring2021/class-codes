#pragma once
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

