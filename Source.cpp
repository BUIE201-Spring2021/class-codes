#include <iostream>

using namespace std;

// call by value mechanism
// function parameters are local variables
// original variables are copied
void f(int i)
{
	cout << "f - begin " << i << endl;
	i *= 2;
	cout << "f - end " << i << endl;
}

// call by reference mechanism
// original variables are not copied
// can also be used to avoid expensive object copies for large objects containing several fields
void g(int& i)
{
	cout << "g - begin " << i << endl;
	i *= 2;
	cout << "g - end " << i << endl;
}

void h(int* i)
{
	cout << "h - begin " << *i << endl;
	(*i) *= 2;
	cout << "h - end " << *i << endl;
}

int main()
{
	int w = 10;
	cout << "main - begin " << w << endl;
	f(w);
	cout << "main - after f" << w << endl;

	g(w);
	cout << "main - after g" << w << endl;

	cout << "w = " << w << "&w = " << &w << endl;
	int* pW = &w;	
	// pointer: address, type

	h(&w);
	cout << "main - after h" << w << endl;

	return 0;
}
