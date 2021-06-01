#pragma once
class MyString
{
	char* pString;

	int Length(const char* pExisting);
	bool Equals(int start, int otherLength, const char* pOther);

public:
	MyString(const char* pExisting);
	MyString(MyString& other);
	~MyString();

	int Length();
	int Count(char c);
	void SetString(const char* pNew);
	void Print();

	bool StartsWith(const char* pOther);
	bool Contains(const char* pOther);
};

