#include<iostream>
#include "Account.h"
using namespace std;
int main() {
	Account ionut_account;
	ionut_account.set_name("Ionut's account");
	ionut_account.set_balance(100000);
	if (ionut_account.deposit(2000)) {
		cout << "Deposit ok";
		return true;
	}
	else {
		cout << "Error";
		return false;
	}
	//...
	return 0;
}