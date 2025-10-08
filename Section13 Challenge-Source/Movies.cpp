#include "Movies.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//-Movies.cpp -  file with the Movies class implementation
Movies::Movies() {

}
Movies::~Movies() {

}
bool Movies :: add_movie(string name, int times_watched) {
	for (const Movie &movie : movies) {
		if (movie.get_name() == name) {
			return false;
		}
	}
	
	movies.push_back(Movie {name, times_watched});
	return true;

}
bool Movies::add_watch_count(string name) {
	for (Movie &movie : movies) {
		if (movie.get_name() == name) {
			movie.add_watch_count();
			return true;
		}
	}
	return false;
}
bool Movies::delete_movie(string name) {
	for (int i = 0; i < movies.size(); i++) {
		if (movies[i].get_name() == name) {
			movies.erase(movies.begin() + i);
			return true;
		}
	}
	return false;
}
void Movies::display() const {
	if (movies.size() == 0) {
		cout << "List is empty, no movies to display!" << endl;
		cout << endl;

	}
	else {
		cout << "----------------------------------------------------" << endl;
		for (const Movie &movie : movies) {
			movie.display();
		}
		cout << "----------------------------------------------------" << endl;
	}
}