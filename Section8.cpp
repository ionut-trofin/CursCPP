//EX.1 Conversion of EUR to USD
/*
#include<iostream>
using namespace std;
void main() {
	const double usd_per_eur = 1.15;
	double euros=0;
	double dollar = 0;
	cout << "Simulator of monetary conversion" << endl;
	cout << "enter the value in EUROS: ";
	cin >> euros;
	dollar = euros * usd_per_eur;
	cout <<euros<< " euros is equivalent to " << dollar << " dollars" << endl;

}
static_cast<double>(total_amount)//coversion from int  to double
*/
//EX.2 
/*
#include<iostream>
using namespace std;
void main() {
	int total = 0;
	int num1, num2, num3 = 0;
	cout << "enter the first integer: ";
	cin >> num1;
	cout << endl;
	cout << "enter the second integer: ";
	cin >> num2;
	cout << endl;
	cout << "enter the third integer: ";
	cin >> num3;

	total = num1 + num2 + num3;
	double average = 0;
	average = static_cast<double>(total) / 3;
	cout << "The sum of the number is: " << total << endl;

	cout << "The average sum of the integer is: " << average << endl;

}
*/
/*
#include <iostream>
using namespace std;
void main() {
	cout << boolalpha;
	int num1, num2 = 0;
	const int lower = 10;
	const int upper = 20;
	cout << "\nEnter an integer that is greater than " << lower << endl;
	cin >> num1;
	cout << num1 << " > " <<lower << " is " << (num1 > lower) << endl;
	cout << "\nEnter an integer that is lower than " << upper << endl;
	cin >> num2;
	cout << num2 << " < " << upper << " is " << (num2 < upper) << endl;

}
*/
//Challenge: Program that displays how to provide the change to the user from cents
#include <iostream>
using namespace std;
void main() {
	const int dollar_v = 100;
	const int quarter_v = 25;
	const int dime_v = 10;
	const int nickel_v = 5;
	const int penny_v = 1;
	float change = 0;

	cout << "Monetary change simulator!" << endl;

	cout << "Enter the number of cents to be changed: ";
	while (true) {
		cin >> change;
		if (change <= 0) {
			cout << "Invalid input, the amount of cents must be greater than 0" << endl;
			cout << "Enter the number of cents: ";
		}
		else {
			break;
		}
	}
	int balance = 0;
	int dollars, quarters, dimes, nickels, pennies = 0;

	dollars = change / dollar_v;
	balance = change - (dollars * dollar_v);

	quarters = balance / quarter_v;
	balance = balance - (quarters * quarter_v);

	dimes = balance / dime_v;
	balance = balance - (dimes * dime_v);

	nickels = balance / nickel_v;
	balance = balance - (nickels * nickel_v);

	pennies = balance / penny_v;
	balance = balance - (pennies * penny_v);

	cout << "The amount of change could be: \n";
	cout << "dollars: " << dollars << endl;
	cout << "quarters: " << quarters << endl;
	cout << "dimes: " << dimes << endl;
	cout << "nickels: " << nickels << endl;
	cout << "pennies: " << pennies << endl;
}
