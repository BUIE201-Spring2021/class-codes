#include <iostream>

using namespace std;

class Rectangle
{
	int height;
	int width;

public:
	Rectangle();
	Rectangle(int h, int w);
	void Print();
};

Rectangle::Rectangle()
{
	height = 0;
	width = 0;
}

Rectangle::Rectangle(int h, int w)
{
	height = h;
	width = w;
}

void Rectangle::Print()
{
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
			cout << "*";
		cout << endl;
	}
}

int main()
{
	Rectangle r(5, 7);
	r.Print();
}
