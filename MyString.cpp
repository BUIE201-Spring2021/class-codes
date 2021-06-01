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

bool MyString::StartsWith(const char* pOther)
{
	int thisLength = Length(pString);
	int otherLength = Length(pOther);

	if (otherLength == 0 || thisLength == 0)
		return false;

	if (thisLength < otherLength)
		return false;

	for (int i = 0; i < otherLength; ++i)
		if (pOther[i] != pString[i])
			return false;

	return true;
}

bool MyString::Equals(int start, int otherLength, const char* pOther)
{
	for (int i = 0; i < otherLength; ++i)
		if (pString[start + i] != pOther[i])
			return false;

	return true;
}

bool MyString::Contains(const char* pOther)
{
	int thisLength = Length(pString);
	int otherLength = Length(pOther);

	if (otherLength == 0)
		return true;

	if (thisLength == 0)
		return false;

	if (thisLength < otherLength)
		return false;

	for (int start = 0; start < thisLength - otherLength; ++start)
	{
		bool Equal = Equals(start, otherLength, pOther);
		if (Equal == true)
			return true;
	}

	return false;
}
