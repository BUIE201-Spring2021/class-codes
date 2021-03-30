#include <iostream>
using namespace std;

// return_type name(parameters): void -> no return type
// Function (name) overloading 

const double PI = 3.14;

double Area(double r)
{
	return PI * r * r;
}

//double Area(int squareLength)	// cannot have two functions that only differ by return type
//{
//	return squareLength * squareLength;
//}

int Area(int squareLength)
{
	return squareLength * squareLength;
}

int Area(int length, int width)
{
	return length * width;
}

void NoReturn(int i = 5, int j = 10)
{
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
}

void ModifyParameter(int input)
{
	cout << "input before modification " << input << endl;

	input = 65;

	cout << "input after modification " << input << endl;
}

int main()
{
	int squareLength = 5;
	int area = Area(squareLength);
	int area2 = Area(4);
	cout << "Area of squareLenght: " << squareLength << " = " << area << endl;

	int rectangleArea = Area(6, 2);
	cout << "Area of rectangle: " << rectangleArea << endl;

	NoReturn(7, 8);
	NoReturn(7);
	NoReturn();

	double areaDouble = Area(4.0);

	// Area("345"); // Does not compile, type mismatch
	float f = 4.345;
	Area(f);	// cast: float -> double 
	bool b = true;
	Area(b);	// cast: bool -> int

	int input = 30;
	cout << "input in main before call " << input << endl;
	ModifyParameter(input);
	cout << "input in main after call " << input << endl;

	return 0;
}
