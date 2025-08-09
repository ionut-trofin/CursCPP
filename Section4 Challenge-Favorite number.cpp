#include <iostream>	
void main() {
	std::cout << "Enter your fav number between 1 and 100\n";
	int n;
	std::cin>> n;
	if (n <= 100 && n >= 0) {
		std::cout << "Amazing!!t you chose " << n << " .That is my fav number too";
	}
	else {
		std::cout<<"Read the prompt! I told you between 1 and 100";
		return;
	}
}
