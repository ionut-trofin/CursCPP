#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
using namespace std;
//EX.1
/*
void main() {
	char my_name[] = "Ionut";
	cout << my_name << endl;
}
*/
//EX.2 C-style Strings
/*
void main() {
	char first_name[20];
	char last_name[20];
	char full_name[50];
	char temp[50];
	cout << "Enter your first name\n";
	cin >> first_name;
	cout << "Enter your last name\n";
	cin >> last_name;
	cout << "hello " << first_name << "Yor name has " << strlen(first_name) << " characters" << endl;

	strcpy(full_name, first_name);//copy first to full name
	strcat(full_name, last_name);//adds last name to full name
	cout << "Enter your name" << endl;
	cin.getline(full_name, 50);//reads until enter

	for (int i = 0; i < strlen(full_name); i++) {
		if (isalpha(full_name[i])) {
			full_name[i] = toupper(full_name[i]);//if letter will be capitalised
		}
	}
}
*/
//EX.3 C++-style Strings
/*
void main() {
	string s1;
	string s2 = "Ionut"; //s2{"Ionut"}
	string s3 = s2;//s3 {s2}
	string s5 {s3,0,2 };
	//concatenation
	string part1{ "C++" };
	string part2{ "is a powerful" };
	string sentence;
	sentence = part1 + " " + part2 + " language";
	//erase and clear
	string s45{ "This is crazy" };
	cout << s45.erase(0, 5);//is crazy
	s45.clear();
	getline(cin, s45);//reads until enter
}
*/
//Section Challenge
void main() {
	string alphabet{ "abcdefghijklmnopqrtuvwxyzABCDEFGHIJKLMNOPQRTUVWXYZ" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
	string encrypted_message;
	string input_message;
	string decrypted_message;
	cout << "\nSecret code cipher\n";
	cout << "Enter the code to be encrypted: ";
	getline(cin, input_message);

	for (char c : input_message) {
		size_t pos = alphabet.find(c);
		if (pos != string::npos) {
			char translation{ key.at(pos) };
			encrypted_message = encrypted_message + translation;
		}
		else {
			encrypted_message = encrypted_message + c;
		}
	}
	for (char c : encrypted_message) {
		size_t pos = key.find(c);
		if (pos != string::npos) {
			char reversion{ alphabet.at(pos) };
			decrypted_message = decrypted_message + reversion;
		}
		else {
			decrypted_message = decrypted_message + c;
		}
	}
	cout << "The message translates from: " << encrypted_message << " to: " << decrypted_message << endl;
}

