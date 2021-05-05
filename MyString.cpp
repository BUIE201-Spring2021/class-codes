#include "MyString.h"

MyString::MyString(const char* pExisting) : pString(nullptr)
{
	int length = Length(pExisting);
	pString = new char[length + 1];

	for (int i = 0; i < length; ++i)
		pString[i] = pExisting[i];

	pString[length] = '\0';

	// equivalent via pointer arithmetic
	// *(pString + length) = '\0';
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
