#include <iostream>
#include <vector>

using namespace std;

// abstract class
class Animal
{

public:
	virtual void Communicate() = 0;	// pure virtual function
};

class Cat : public Animal
{

public:
	virtual void Communicate();
};

void Cat::Communicate()
{
	cout << "Miyav" << endl;
}

class Dog : public Animal
{

public:
	virtual void Communicate();
};

void Dog::Communicate()
{
	cout << "Hav" << endl;
}


int main()
{
	Dog d;
	d.Communicate();

	Cat c;
	c.Communicate();

	// Cannot create an instance of abstract class
	// Animal a;
	// a.Communicate();

	return 0;
}
