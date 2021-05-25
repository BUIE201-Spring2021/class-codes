#pragma once

class Rectangle
{
protected:		// Behaves as public for child classes, private for others
	int height;
	int width;

public:
	Rectangle();
	virtual ~Rectangle();
	Rectangle(int h, int w);

	void Print();
	virtual void VirtualPrint();
};

