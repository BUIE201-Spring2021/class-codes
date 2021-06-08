#include "IntegerArray.h"
#include <iostream>
using namespace std;

IntegerArray::IntegerArray()
{
	pArray = nullptr;
	size = 0;
}

IntegerArray::~IntegerArray()
{
	delete[] pArray;
	pArray = nullptr;
}

// O(n)
void IntegerArray::Insert(int value)
{
	int* pNewArray = new int[size + 1];
	for (int i = 0; i < size; ++i)
		pNewArray[i] = pArray[i];
	pNewArray[size] = value;
	++size;

	delete[] pArray;
	pArray = pNewArray;
}

// O(n)
void IntegerArray::Print()
{
	cout << "[ ";
	for (int i = 0; i < size; ++i)
		cout << pArray[i] << " ";
	cout << "]";
}

// O(n)
bool IntegerArray::Find(int value)
{
	for (int i = 0; i < size; ++i)
		if (pArray[i] == value)
			return true;

	return false;
}
