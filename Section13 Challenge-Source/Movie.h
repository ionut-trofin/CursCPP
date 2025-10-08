#pragma once
#include <vector>
#include <string>
#include<iostream>
using namespace std;

//-Movie.h - include file with the Movie class specification
class Movie
{
private:
	string name;
	int times_watched;
public:
	Movie(string name, int times_watched);//constructor
	Movie(const Movie& source);
	~Movie();

	void set_name(string name) {
		this->name = name;
	}
	void set_watched(int times_watched) {
		this->times_watched = times_watched;
	}

	string get_name() const {
		return name;
	}
	int get_watched() const {
		return times_watched;
	}
	void add_watch_count() {
		times_watched++;
	}
	void display() const;
};

