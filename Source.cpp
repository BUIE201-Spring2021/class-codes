#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

void PrintString(MyString str)
{
	cout << "PrintString - begin" << endl;
	str.Print();
	cout << "PrintString - end" << endl;
}

int main()
{
	string myString("IE 201");

	MyString str("IE 201 Intermediate Programming");

	int length = str.Length();
	int countI = str.Count('I');

	str.SetString("IE 203 Operations Research II");
	int length203 = str.Length();
	int countI203 = str.Count('I');

	PrintString(str);
}
