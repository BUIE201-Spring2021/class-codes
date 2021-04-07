#include <iostream>
#include "DateClass.h"

using namespace std;

int main()
{
	// Class -> definition
	// Object -> instances
	DateClass todayObject;

	todayObject.Print();
	bool Success = todayObject.SetDate(2021, -4, 6);
	bool Success2 = todayObject.SetDate(2021, 4, 6);
	todayObject.Print();

	DateClass tomorrowObject(2021, 4, 7);
	tomorrowObject.Print();

	return 0;
}
