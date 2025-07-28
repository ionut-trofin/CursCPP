/*
EX.1
#include<iostream>
using namespace std;
#include<vector>
//Declare an array of 10  integers named arr  and initialize the array so that all 10 integers are 0 .
vector<int> use_array() {
	int arr[10]{};
	arr[0]=100;
	arr[9] = 1000;
	vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
	return v;
}
void main() {
	//int test_scores[5]{100,90,80,70};
	//cout << test_scores[0];
	vector<int> result = use_array();
	cout << "Elements of the vector" << endl;
	for (int val : result) {
		cout << val << "  ";
	}
}
*/
//EX.2 Challenge
#include<iostream>
#include <vector>
using namespace std;
void main() {
	//vector<int> test_scores{ 100,95,80 };
	//cout << "First score index 0: " << test_scores[0]/test_scores.at(0) << endl;
	//test_scores.push_back(75);//inserare in spatiu de vector cu un nou element
	//nu se adauga peste limita --Out of Bounds--
	vector<int> vector1;
	vector<int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "Elements of vector 1: \n";
	cout << vector1.at(0) << endl << vector1.at(1) << endl;
	cout << "Size of the vector: " << vector1.size() << endl;
	cout << endl;

	vector2.push_back(100);
	vector2.push_back(200);
	cout << "Elements of vector 2: \n";
	cout << vector2.at(0) << endl << vector2.at(1) << endl;
	cout << "Size of the vector: " << vector2.size() << endl;

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << "Elements of the 2D vector" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;
	cout << "Modified vector1:\n";
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	vector_2d.at(0).at(0) = 1000;
	cout << "Elements of the modified 2D vector" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
}
