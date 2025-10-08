#pragma once
#include<iostream>
#include <vector>
#include <string>
#include "Movie.h"
using namespace std;

//- Movies.h - include file with the Movies class specification
class Movies
{
private:
	vector<Movie> movies;
public:
	Movies();//constructor
	~Movies();//destructor
	bool add_movie(string name, int times_watched);//It will search the movies vector to see if a movie object already exists with the same name
	bool add_watch_count(string name);//search the movies vector to see if a movie object already exists with the same name. If it does then increment that objects watched by 1 and return true. Otherwise, return false
	bool delete_movie(string name);
	void display() const;
};
