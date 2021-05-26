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

// Polymorphism
void CommunicateAll(vector<Animal*>& Animals)
{
	for (Animal* pAnimal : Animals)
		pAnimal->Communicate();
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

	vector<Animal*> Animals;
	//Animals.push_back(new Dog);
	//Animals.push_back(new Cat);
	//Animals.push_back(new Dog);
	//Animals.push_back(new Dog);

	cout << "How many animals do you want to create?" << endl;
	int nAnimals;
	cin >> nAnimals;

	for (int i = 0; i < nAnimals; ++i)
	{
		cout << "Please type C for cat and D for dog" << endl;
		char type;
		cin >> type;
		if (type == 'C')
			Animals.push_back(new Cat);
		else
			Animals.push_back(new Dog);
	}

	CommunicateAll(Animals);

	return 0;
}
