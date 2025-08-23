#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//EX.1 function statements
/*
const double pi = 3.14159;

double calc_area_circle(double radius) {
	return pi * radius * radius;
}
void area_circle() {
	double radius = 0;
	cout << "enter the radius of the circle: ";
	cin >> radius;
	cout << "The area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}
double calc_volume_cylinder(double radius, double height){
	return pi * radius * radius * height;
	return calc_area_circle(radius) * height;
}
void volume_cylinder() {
	double radius = 0;
	double height = 0;
	cout << "Enter the radius of the cylinder: ";
	cin >> radius;
	cout << "\nEnter the height of the cylinder: ";
	cin >> height;
	cout << "\nThe volume of a cylinder with a radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
int main() {
	area_circle();
	volume_cylinder();
	return 0;
}//EX.4 recursion
//unsigned long long factorial(unsigned long long n);
//int main() {
//	cout << factorial(3) << endl;
//}
//unsigned long long factorial(unsigned long long n) {
//	if (n == 0) {
//		return n;
//	}
//	return n * factorial(n - 1);
//}
//
*/
//Section 11 Challenge interactive menu using functions and references

void display_menu();
void print_numbers(const vector<int>&);
void add_numbers(vector<int>&);
void display_mean(const vector<int>&);
void display_smallest(const vector<int>&);
void display_largest(const vector<int>&);
void clear_list(vector<int>&);
int main() {
	vector<int> list_content;
	while (true) {
		char letter_selector = 0;
		display_menu();
		cin >> letter_selector;
		letter_selector = toupper(letter_selector);

		switch (letter_selector) {
		case 'P':
			print_numbers(list_content);
			break;
		case 'A':
			add_numbers(list_content);
			break;
		case 'M':
			display_mean(list_content);
			break;
		case 'S':
			display_smallest(list_content);
			break;

		case 'L':
			display_largest(list_content);
			break;
		case 'E':
			clear_list(list_content);
			break;
		case 'Q':
			cout << "Exiting the menu..." << endl;
			return 0;
		default:
			cout << "Invalid option!" << endl;
			cout << endl;
			break;
		}
	}
}
void display_menu() {
	char letter_selector = 0;
	cout << "P - Print numbers" << endl;
	cout << "A - Add numbers" << endl;
	cout << "M - Display the mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "E - Clear the list" << endl;
	cout << "Q - Quit" << endl;
	cout << endl;
	cout << "Enter your choice: ";
}
void print_numbers(const vector<int>& list_content) {
	if (list_content.empty()) {
		cout << "The list is empty!" << endl;
	}
	else {
		cout << "The content of the list is: " << endl;
		for (auto num : list_content) {
			cout << num << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void add_numbers(vector<int>& list_content) {
	int add;
	cout << "Enter the number you wish to add: ";
	cin >> add;
	list_content.push_back(add);
	cout<<endl;
}
void display_mean(const vector<int>& list_content) {
	double sum=0;
	double avg_sum=0;
	if (list_content.empty()) {
		cout << "The list is empty!" << endl;
	}
	else {
		for (auto num : list_content) {
			sum = sum + num;
		}
		avg_sum = sum / list_content.size();
		cout << "The mean of the numbers from the list is: " << avg_sum << endl;
	}
	cout << endl;
}
void display_smallest(const vector<int>& list_content) {
	if (list_content.empty()) {
		cout << "The list is empty!"<< endl;
	}
	else {
		int smallest_number = list_content.at(0);
		for (auto num : list_content) {
			if (num < smallest_number) {
				smallest_number = num;
			}
		}
		cout << "The smallest number from the list is: " << smallest_number << endl;
	}
	cout << endl;
}
void display_largest(const vector<int>& list_content) {
	if (list_content.empty()) {
		cout << "The list is empty!" << endl;
	}
	else {
		int largest_number = list_content.at(0);
		for (auto num : list_content) {
			if (num > largest_number) {
				largest_number = num;
			}
		}
		cout << "The biggest number from the list is: " << largest_number << endl;
	}
	cout << endl;
}
void clear_list(vector<int>& list_content) {
	if (list_content.empty()) {
		cout << "The list is already empty!" << endl;
	}
	else {
		list_content.clear();
		cout << "The list is now empty. Cleaning succesfully!" << endl;
	}
	cout << endl;

}
