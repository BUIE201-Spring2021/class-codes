#pragma once
#include "Rectangle.h"

class NewSquare : public Rectangle
{
public:
	NewSquare();
	~NewSquare();
	NewSquare(int l);

	void Print();	// Function overriding
};

