#include "MyString.h"
#include <iostream>

MyString::MyString(const char* pExisting) : pString(nullptr)
{
	SetString(pExisting);
}

MyString::MyString(MyString& other) : pString(nullptr)
{
	SetString(other.pString);
}

MyString::~MyString()
{
	delete[] pString;
	pString = nullptr;
}

void MyString::SetString(const char* pNew)
{
	delete[] pString;
	pString = nullptr;

	int length = Length(pNew);
	pString = new char[length + 1];

	for (int i = 0; i < length; ++i)
		pString[i] = pNew[i];

	pString[length] = '\0';
	// equivalent via pointer arithmetic
	// *(pString + length) = '\0';
}

int MyString::Length(const char* pExisting)
{
	if (pExisting == nullptr)
		return 0;

	int count = 0;
	int i = 0;
	while (pExisting[i] != '\0')
	{
		++count;
		++i;
	}
	return count;
}

int MyString::Length()
{
	int length = Length(pString);
	return length;
}

int MyString::Count(char c)
{
	if (pString == nullptr)
		return 0;

	int count = 0;
	int i = 0;
	while (pString[i] != '\0')
	{
		if (pString[i] == c)
			++count;
		++i;
	}
	return count;
}

void MyString::Print()
{
	if (pString == nullptr)
		std::cout << "[Empty string]" << std::endl;
	else
		std::cout << pString << std::endl;
}
