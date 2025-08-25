#include<vector>
#include <string>
#include<iostream>
using namespace std;
//Pointers
/*
void main() {
	int* p1 = nullptr;
	int* p2 = nullptr;
	vector<string>* p3 = nullptr;

	cout << "sizeof:" << p3 << endl;
	cout << "address" << &p3 << endl;
	double hitemp = 100.7;
	double* ptr_temp = &hitemp;
	cout << *ptr_temp << endl;//100.7
}
*/
//Dynamic memory allocation
//void main() {
	//int* int_ptr = nullptr;
	//int_ptr = new int;
	//cout << int_ptr << endl;//allocates size of an int in the heap and stores the address in ptr
	//delete int_ptr;

//	size_t size = 0;
//	double* temp_ptr = nullptr;
//	cout << "How many temps" << endl;
//	cin >> size;
//	temp_ptr = new double[size];
//	cout << temp_ptr << endl;
//	delete[] temp_ptr;
//
	/*
	int scores[]{ 100,95,89 };
	cout << "Value of the scores " << scores << endl;
	int* score_ptr = scores;
	cout << "Value of score_ptr " << score_ptr << endl;

	cout << endl << "Array subscript notation" << endl;
	cout << scores[0];

	cout << endl << "Pointer subscript notation" << endl;
	cout << score_ptr[0];

	cout << endl << "Pointer offset notation" << endl;
	cout << *(score_ptr + 0);

	cout << endl << "Array offset notation" << endl;
	cout << *(scores + 0);
	*/
	//}
//SECTION 12 Challenge Write a function that expects 2 arrays of ints and their sizes and dynamically
//allocates a new array whose size is the product of the 2 arr sizes.The function need to return a pointer
//to the new array

int* process(const int* const arr1, int size1, const int* const arr2, int size2) {
	int* new_array = nullptr;
	new_array = new int[size1 * size2];
	int i, j;
	int pos = 0;
	for (i = 0; i < size2; i++) {
		for (j = 0; j < size1; j++) {
			new_array[pos] = arr2[i] * arr1[j];
			pos++;
		}
	}
	return new_array;
}
void display(const int* const arr, int size) {
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i != size -1) {
			cout << ", ";
		}
	}
	cout << "]";
	cout << endl;

}
void main() {
	int arr1_size = 5;
	int arr2_size = 3;

	int arr1[]{ 1,2,3,4,5 };
	int arr2[]{ 10,20,30 };

	cout << "Array no.1: ";
	display(arr1, arr1_size);
	cout << "Array no.2: ";
	display(arr2, arr2_size);

	cout << "The new array with the calculations: ";
	int *result_array = process(arr1, arr1_size, arr2, arr2_size);
	int result_array_size = arr1_size * arr2_size;

	display(result_array, result_array_size);
	delete[]result_array;
}