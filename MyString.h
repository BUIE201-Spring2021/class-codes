#pragma once
class MyString
{
	char* pString;

	int Length(const char* pExisting);
public:
	MyString(const char* pExisting);
	MyString(MyString& other);
	~MyString();

	int Length();
	int Count(char c);
	void SetString(const char* pNew);
	void Print();
};

