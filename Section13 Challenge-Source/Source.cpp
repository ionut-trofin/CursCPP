/*Section 13 Challenge
==============

For this challenge you are to develop the foundation for a program
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following :

class Movie - models a movie which includes
	- movie name
	- movie rating(G, PG, PG - 13, R)
	- watched - the number of times the movie has been watched

	class Movies - models a collection of movie objects

	Obviously, Movies needs to know about Movie since it is a collection of Movie object
	However, our main driver should only interact with the Movies class.

	For example.a simple main should be able to
	- create a Movies object
	- ask the Movies object to add a movie by providing the movie name, rating and watched count
	- ask the Movies object to increment the watched count by 1 for a movie given its name
	- ask the Movies object to display all of its movies*/
#include <iostream>
#include "Movies.h"
using namespace std;
void add_watch_count(Movies& movies, string name) {
	if (movies.add_watch_count(name)) {
		cout << name << " watch incremented" << endl;
	}
	else {
		cout << name << " not found" << endl;
	}
}
void add_movie(Movies& movies, string name, int times_watched) {
	if (movies.add_movie(name, times_watched)) {
		cout << name << " added successfully" << endl;
	}
	else {
		cout << name << " already exists" << endl;
	}
}
void delete_movie(Movies& movies, string name) {
	if (movies.delete_movie(name)) {
		cout << name << " deleted successfully" << endl;
	}
	else {
		cout << name << " doesn't exist!" << endl;
	}
}
int main() {
	Movies my_movie_list;
	int option;
	while (true) {
		cout << "\n=== MOVIE MENU ===" << endl;
		cout << "press 1. for Display movie list" << endl;
		cout << "press 2. for Add a movie" << endl;
		cout << "press 3. for Delete a movie" << endl;
		cout << "press 4. for Increment watch count" << endl;
		cout << "press 5. for Exit" << endl;
		cout << "Enter your choice: ";
		cin >> option;
		if (cin.fail()) {
			cin.clear();  // Clear the error flag
			cin.ignore();  // Discard invalid input
			cout << "Invalid input. Please enter a number!" << endl;
			continue;
		}

		cin.ignore();  // Consume the newline after the number

		string name;
		switch (option) {
		case 1:
			cout << "\n---Movie List---\n";
			my_movie_list.display();
			break;

		case 2:
		{
			int times_watched;
			cout << "Enter the name of the movie: ";
			getline(cin, name);
			cout << "Enter the amount of times you have seen it: ";
			cin >> times_watched;
			add_movie(my_movie_list, name, times_watched);
			break;
		}

		case 3:
		{
			cout << "Enter movie name to delete: ";
			getline(cin, name);
			delete_movie(my_movie_list, name);
			break;
		}

		case 4:
		{
			cout << "Enter the movie name to increment: ";
			getline(cin, name);
			add_watch_count(my_movie_list, name);
			break;
		}

		case 5:
			cout << "Exiting the program..." << endl;
			return 0;

		default:
			cout << "Invalid choice. Retry!" << endl;
			break;
		}

	}
}
