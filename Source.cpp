#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
	MyString str("IE 201 Intermediate Programming");

	bool Start1 = str.StartsWith("IE 201");

	bool Start2 = str.StartsWith("Inter");

	bool Contain1 = str.Contains("201");

	bool Contain2 = str.Contains("305");

}
