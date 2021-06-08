#pragma once
class IntegerArray
{
	int* pArray;
	int size;

public:
	IntegerArray();
	~IntegerArray();

	void Print();
	bool Find(int value);
	void Insert(int value);
};

