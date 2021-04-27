#include <iostream>
#include <map>
#include "DateClass.h"
#include "Movie.h"
#include "Viewer.h"

using namespace std;

int main()
{
	map<string, Movie*> Movies;
	Movies["matrix"] = new Movie("The Matrix", 8.7, 1999, 9, 3);
	Movies["lotr"] = new Movie("Lord of the Rings", 8.8, 2001, 12, 21);

	cout << "Please enter number of viewers " << endl;
	int nViewers;
	cin >> nViewers;

	map<string, Viewer*> Viewers;
	for (int i = 0; i < nViewers; ++i)
	{
		cout << "Please enter name for viewer " << i << endl;
		string name;
		cin >> name;

		Viewer* pViewer = new Viewer(name);
		Viewers[name] = pViewer;
	}

	cout << "Here are the viewers " << endl;
	for (auto [name, pViewer] : Viewers)
		pViewer->Print();

	while (true)
	{
		cout << "Please enter movie name: " << endl;
		string movieName;
		cin >> movieName;

		if (movieName == "0")
			break;

		if (Movies.count(movieName) == 0)
		{
			cout << "Unknown movie: " << movieName << endl;
			continue;
		}
		else
		{
			Movie* pMovie = Movies[movieName];
			cout << "Movie found: " << endl;
			pMovie->Print();
		}
	}

	for (auto [name, pViewer] : Viewers)
		delete pViewer;
	Viewers.clear();

	return 0;
}
