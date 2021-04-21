#pragma once
#include <string>
#include <vector>
using namespace std;

class Movie;

class Viewer
{
	string Name;
	vector<Movie*> Movies;

public:
	Viewer(string NameIn);

	void AddMovie(Movie* pMovie);

	void Print();
	void ShowMovies();
};

