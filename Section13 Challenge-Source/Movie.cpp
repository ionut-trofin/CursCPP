#include "Movie.h"
#include <iostream>
using namespace std;
//-Movie.cpp -  file with the Movie class implementation
Movie::Movie(string name, int times_watched)
	: name(name), times_watched(times_watched) {

}
Movie::Movie(const Movie& source)
	: Movie{ source.name, source.times_watched } {

}
Movie::~Movie(){}
void Movie::display() const {
	cout << name << ", " << times_watched << " " << endl;
}
