#include<iostream>
#include <vector>
//EX.1 Grades
using namespace std;
/*
void main() {
	int score;
	char letter = 0;
	cout << "Enter your score on the exam(0-100): ";
	cin >> score;
	if (score >= 0 && score <= 100) {
		
		if (score>90) {
			letter = 'A';
		}
		else if (score > 80) {
			letter = 'B';
		}
		else if(score>70)
		{
			letter = 'C';
		}
		else if (score > 60) {
			letter = 'D';
		}
		else {
			letter = 'F';
		}
		cout << "Your US grade is: " << letter << endl;
	}
	else {
		cout << "Invalid input, " << score << "is not in range" << endl;
	}
}
*/
//EX.2 shipping cost calculator
/*
void main() {
	int lenght, width, height;
	cout << "Shipping cost calculator" << endl;
	cout << "Enter the lenght of the package: ";
	cin >> lenght;
	cout << endl;
	cout << "Enter the width of the package: ";
	cin >> width;
	cout << endl;
	cout << "Enter the height of the package: ";
	cin >> height;
	cout << "========================================\n";
	float volume = 0;
	const float base_cost = 2.50;
	volume = lenght * width * height;
	if (volume == 0) {
		cout << "The volume 0 is an invalid package volume" << endl;
	}
	else {
		if (volume >= 0 && volume <= 100) {
			cout << "The cost is " << base_cost << " dollars for the package" << endl;
		}
		else if (volume > 100 && volume <= 500) {
			cout << "The package volume exceeds 100 cubic inches therefore a 10% extra fee applies" << endl;
			cout << "The cost is " << base_cost * 0.10 +base_cost << " dollars for the package" << endl;
		}
		else if (volume > 500) {
			cout << "The package volume exceeds 500 cubic inches therefore a 25% extra fee applies" << endl;
			cout << "The cost is " << base_cost * 0.25 + base_cost << " dollars for the package" << endl;
		}
	}
}
*/
//EX.3 conditional operator example
/*
void main() {
	int num1, num2;
	cout << "Enter 2 numbers: ";
	cin >> num1 >> num2;
	if (num1 != num2){
		cout << "The bigger: " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "The smaller: "<< ((num1 < num2) ? num1 : num2) << endl;
	}
	else {
		cout << "EQUALITY" << endl;
	}
}
*/
// EX.4 ranged based for loop
/*
void main() {
	vector<double> temps{ 87.2, 77.1, 80.0, 72.5 };
	double avg_tmp;
	double sum;
	for (auto temp : temps) {
		sum = sum + temp;
	}
	avg_tmp = sum / temps.size();
}

*/
//EX.5 while loop 
/*
void main() {
	bool done = false;
	int number = 0;
	while (!done) {
		cout << "Enter a number between 1 and 5: ";
		cin >> number;
		if (number <= 1 || number >= 5) {
			cout << "Out of range. Try again" << endl;
		}
		else {
			cout << "Thanks" << endl;
			done = true;
		}
	}
}
*/

//Challenge
int main() {
	vector<int> list_content;
	while (true) {
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
		cin >> letter_selector;
		letter_selector = toupper(letter_selector);

		float sum = 0;
		float avg_sum = 0;
		int smallest = 0;
		int largest = 0;
		switch (letter_selector) {
		case 'P':
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
			break;

		case 'A':
			cout << "Enter the number you wish to add: ";
			int add;
			cin >> add;
			list_content.push_back(add);
			cout << endl;
			break;

		case 'M':
			for (auto num : list_content) {
				sum = num + sum;
			}
			avg_sum = sum / list_content.size();
			cout << "The mean of the numbers from the list is: " << avg_sum << endl;
			cout << endl;
			break;

		case 'S':
			if (list_content.empty()) {
				cout << "The list is empty!" << endl;
			}
			else {
				smallest = list_content.at(0);
				for (auto num : list_content) {
					if (num < smallest) {
						smallest = num;
					}
				}
				cout << "The smallest number from the list is: " << smallest << "." << endl;
			}
			break;

		case 'L':
			if (list_content.empty()) {
				cout << "The list is empty!" << endl;
			}
			else {
				largest = list_content.at(0);
				for (auto num : list_content) {
					if (num > largest) {
						largest = num;
					}
				}
				cout << "The largest number from the list is: " <<largest << "." << endl;
			}
			break;
		case 'E':
			if (list_content.empty()) {
				cout << "The list is already empty!" << endl;
			}
			else {
				list_content.clear();
				cout << "The list was cleared succesfully!" << endl;
			}
			cout << endl;
			break;

		case 'Q':
			cout << "Exiting the program..." << endl;
			return 0;

		default:
			cout << "Invalid option!" << endl;
			cout << endl;
			break;
		}
		
	}
}