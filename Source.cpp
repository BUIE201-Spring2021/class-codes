#include <iostream>
using namespace std;

/* This is a C-style comment*/
// This is a C++ style comment
// This is the second line of the comment

int main()
{
	cout << "Hello, world!" << endl;
	cout << "This is a double: " << 3.54353 << endl;

	cout << "Please enter an integer: " << endl;
	int i = 0;
	cin >> i;
	cout << "The value that you entered is: " << i << endl;

	cout << "Please enter a string: " << endl;
	string str;
	cin >> str;
	cout << "The value that you entered is: " << str << endl;

	double d = 43.5634;
	float f = 4.25;

	cout << "Minimum value for int: " << numeric_limits<int>::min() << '\n';
	cout << "Maximum value for int: " << numeric_limits<int>::max() << '\n';

	std::cout << "Minimum value for unsigned int: " << std::numeric_limits<unsigned int>::min() << '\n';
	std::cout << "Maximum value for unsigned int: " << std::numeric_limits<unsigned int>::max() << '\n';

	std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
	std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';

	std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';
	std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';

	long int li; // large integer values

	bool b = true;
	b = false;

	return 0;
}
