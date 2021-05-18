#include <iostream>

using namespace std;

//#define ARRAY_SIZE_MACRO 10

int main()
{
	const int ARRAY_SIZE = 10;
	int StackArray[ARRAY_SIZE];

	int nIntegers;
	cout << "Please enter number of items: " << endl;
	cin >> nIntegers;

	// The following does not work since nIntegers is not a const.
	int Array[nIntegers];

}
