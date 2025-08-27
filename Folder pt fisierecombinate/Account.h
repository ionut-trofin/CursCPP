#pragma once
using namespace std;
#include <string>
class Account
{
private:
	//atributes
	string name;
	double balance;
public:
	void set_balance(double bal) {
		balance = bal;
	}
	double get_balance() {
		return balance;
	}
	void set_name(string n);
	string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

};

