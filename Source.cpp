#include <iostream>
using namespace std;

/* This is a C-style comment*/
// This is a C++ style comment
// This is the second line of the comment

int global = 4;	// Global variable. Don't use global variables!

#define PI 3.14

int main()
{
	//cout << "Hello, world!" << endl;
	//cout << "This is a double: " << 3.54353 << endl;

	//cout << "Please enter an integer: " << endl;
	//int i = 0;
	//cin >> i;
	//cout << "The value that you entered is: " << i << endl;

	//cout << "Please enter a string: " << endl;
	//string str;
	//cin >> str;
	//cout << "The value that you entered is: " << str << endl;

	double d = 43.5634;	// local variables
	float f = 4.25;

	cout << "Minimum value for int: " << numeric_limits<int>::min() << '\n';
	cout << "Maximum value for int: " << numeric_limits<int>::max() << '\n';

	std::cout << "Minimum value for unsigned int: " << std::numeric_limits<unsigned int>::min() << '\n';
	std::cout << "Maximum value for unsigned int: " << std::numeric_limits<unsigned int>::max() << '\n';

	std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
	std::cout << "Minimum value for float: " << std::numeric_limits<float>::max() << '\n';

	std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';
	std::cout << "Minimum value for double: " << std::numeric_limits<double>::max() << '\n';

	long int li; // large integer values

	bool b = true;
	b = false;

	cout << "The value of PI is " << PI << endl;

	const double PIConst = 3.14;
	cout << "The value of PI is " << PIConst << endl;

	// PIConst = 242.342; // cannot change const variables after initialization

	// don't directly compare double numbers using == 
	// check if the difference between two doubles is "small enough"

	// Beware of the finite precision arithmetic 
	double d3 = 33222.221;
	int i3 = d3 * 1000;
	if (i3 == 33222221)
		cout << "No problem" << endl;
	else
		cout << i3 << endl;

	int w = 34;
	if (w > 30)
	{
		// do something
	}
	else if (w > 20)
	{
		// do something else
	}
	else
	{
		// do yet another thing
	}

	for (int l = 0; l < 5; l++)
	{
		cout << "l = " << l << endl;
	}

	int t = 6;
	while (t > 0)
	{
		cout << "t = " << t << endl;
		--t;
	}

	int y = 0;
	do
	{
		cout << "y = " << y << endl;
		--y;
	} 	while (y > 2);

	const int NUM_ITERATIONS = 10;
	for (int l = 0; l < NUM_ITERATIONS; l++)
	{
		if (l == 5)
			continue;
		else if (l == 7)
			break;

		cout << "l = " << l << endl;
	}

	int a = 6;
	switch (a)
	{
	case 1: cout << "First case" << endl; break;
	case 2: cout << "Second case" << endl; break;
	default: cout << "Default case" << endl;
	}

	// Logic operators
	// && and
	// || or
	// ! not
	// == comparison
	// = assignment
	// != not equal
	// <, >, <=, >=
	// +, *, /, - : integer division vs double division
	// ++, --
	// +=, -= 
	// ?:

	int q = 45;
	bool b;
	if (q > 40)
		b = true;
	else
		b = false;

	bool b2 = q > 40 ? true : false;

	cout << "Integer division: " << 5 / 3 << endl;
	cout << "Double division: " << 5.0 / 2 << endl;
	cout << "Double division: " << double(5) / 2 << endl;

	return 0;
}
