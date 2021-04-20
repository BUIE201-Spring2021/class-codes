#include "Viewer.h"
#include <iostream>

using namespace std;

Viewer::Viewer(string NameIn) : Name(NameIn)
{
}

void Viewer::Print()
{
	cout << "Viewer Name: " << Name << endl;
}
