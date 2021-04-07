#include <iostream>
#include "DateClass.h"

using namespace std;

void PrintGlobal(DateClass theObject)
{
	cout << "PrintGlobal - begin" << endl;
	theObject.Print();
	cout << "PrintGlobal - end" << endl;
}

int main()
{
	cout << "main - begin" << endl;

	DateClass today(2021, 4, 7);

	PrintGlobal(today);

	cout << "main - end" << endl;

	return 0;
}
