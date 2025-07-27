//EX.1
/*
#include <iostream>
#include <string>
using namespace std;
void main() {
	int age = 0;
	string name;
	double hourly_wage = 23.50;
	cout << "Enter the name: \n";
	cin >> name;
	cout << "Enter the age: \n";
	cin >> age;
	cout << "Name: " << name << " Age: " << age << " Hourly Wage: " << hourly_wage << endl;
}
*/

//EX.2
/*
#include <iostream>
using namespace std;
void main() {
	cout << "Room cleaning simulation\n";
	cout << "\nEnter the number of rooms to be cleaned: ";
	int rooms = 0;
	while (true) {
		cin >> rooms;
		if (rooms <= 0) {
			cout << "Invalid input. Try Again!" << endl;
			cout << "\nEnter the number of rooms to be cleaned: ";
		}
		else {
			break;
		}
	}
	const double price_per_room = 60;
	const float taxrate = 0.08;

	cout << "=========================================================" << endl;
	cout << "\nEstimated cost for cleaning: " << endl;
	cout << "Number of rooms: " << rooms << endl;
	cout << "price per room(EUR): " << price_per_room << endl;
	cout << "Cost of service: " << price_per_room * rooms << "EUR" << endl;
	cout << "Tax: " << price_per_room * rooms * taxrate << "EUR" << endl;
	cout << "Total cost (Cost of service + Tax): " << price_per_room * rooms + price_per_room * rooms * taxrate << "EUR" << endl;
	cout << "=========================================================" << endl;

}
*/
//EX.3 challenge
#include<iostream>
using namespace std;
void main() {
	int roomS;
	int roomL;
	cout << "Room cleaning simulation\n";
	cout << "Enter the nr of small rooms to be cleaned: " << endl;
	while (true) {
		cin >> roomS;
		if (roomS < 0) {
			cout << "\nInvalid input. Try Again!" << endl;
			cout << "Enter the number of small rooms to be cleaned: ";
		}
		else {
			break;
		}
	}
	cout << "\nEnter the nr of large rooms to be cleaned: " << endl;
	while (true) {
		cin >> roomL;
		if (roomL < 0) {
			cout<<"\nInvalid input. Try Again!" << endl;
			cout<< "Enter the nr of large rooms to be cleaned : " << endl;
		}
		else {
			break;
		}
	}
	const float price_small_room = 25;
	const float price_large_room = 38;
	const float taxrate = 0.06;
	const int validdays = 30;

	double cost_of_service = price_large_room * roomL + price_small_room * roomS;

	cout << "=========================================================" << endl;
	cout << "\nEstimated cost for cleaning " << endl;
	cout << "Number of rooms SMALL: " << roomS <<endl<< "Number of rooms LARGE: " << roomL<< endl;
	cout << "price per SMALL room(EUR): " << price_small_room << endl << "price per LARGE room(EUR): "<<price_large_room<<endl;
	cout << "Cost of service: " << cost_of_service << "EUR" << endl;
	cout << "Tax: " << cost_of_service * taxrate << "EUR" << endl;
	cout << "Total cost (Cost of service + Tax): " << cost_of_service+taxrate << "EUR" << endl;
	cout << "This estimate is valid for " << validdays << " days" << endl;
	cout << "=========================================================" << endl;

}