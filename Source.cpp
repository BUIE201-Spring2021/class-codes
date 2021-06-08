#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main()
{
	IntegerArray myArray;
	myArray.Insert(4);
	myArray.Insert(5);
	myArray.Insert(3);

	myArray.Print();

	bool find5 = myArray.Find(5);
	bool find10 = myArray.Find(10);

}
