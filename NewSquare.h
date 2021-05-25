#pragma once
#include "Rectangle.h"

class NewSquare : public Rectangle
{
public:
	NewSquare();
	virtual ~NewSquare();
	NewSquare(int l);

	void Print();	// Function overriding
	virtual void VirtualPrint();
};

