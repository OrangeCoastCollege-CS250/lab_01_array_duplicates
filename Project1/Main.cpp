/*
	Badajoz, Severiano

	CS A250
	September 5, 2017

	Lab 1
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int CAP = 20;

void testArrays(int a[], const int numOfElements);

// Declaration of function deleteDuplicates
void deleteDuplicates(int arr[], int &size);
// Declaration of function printArray
void printArray(int arr[], int &size);
int main()
{
	int a1[CAP],
		a2[CAP] = { 1 },
		a3[CAP] = { 1, 1 },
		a4[CAP] = { 1, 1, 2 },
		a5[CAP] = { 1, 2, 1 },
		a6[CAP] = { 1, 2, 2 },
		a7[CAP] = { 1, 1, 1, 2, 1 },
		a8[CAP] = { 1, 2, 2, 1, 2, 2, 2 },
		a9[CAP] = { 2, 3, 5, 1, 2, 3, 5, 2, 4, 5, 6, 7, 3, 2, 5, 7, 3, 7, 4, 6 }; 

	cout << "Array 1: ";
	testArrays(a1, 0);
	cout << "\nArray 2: ";
	testArrays(a2, 1);
	cout << "\nArray 3: ";
	testArrays(a3, 2);
	cout << "\nArray 4: ";
	testArrays(a4, 3);
	cout << "\nArray 5: ";
	testArrays(a5, 3);
	cout << "\nArray 6: ";
	testArrays(a6, 3);
	cout << "\nArray 7: ";
	testArrays(a7, 5);
	cout << "\nArray 8: ";
	testArrays(a8, 7);
	cout << "\nArray 9: ";
	testArrays(a9, CAP);
  
	cout << endl;
	system("Pause");
	return 0;
}

void testArrays(int a[], int numOfElements)
{
	printArray(a, numOfElements);

	if (numOfElements != 0)
	{
		cout << "\nDeleting duplicates... ";
		deleteDuplicates(a, numOfElements);

		printArray(a, numOfElements);
		cout << endl;
	}
}

// Definition of function deleteDuplicates
void deleteDuplicates(int arr[], int &size) {
	int newArrSize = size;
	for (unsigned int i = 0; i < size; i++) {
		int searchInt = arr[i];
		for (unsigned int y = i + 1; y < size; y++) {
			if (arr[y] == searchInt) {
				newArrSize--;
				for (unsigned int j = y; j < size - 1; j++) {
					arr[j] = arr[j + 1];
				}
			}
		}
		size = newArrSize;
	}
}
// Definition of function printArray
void printArray(int arr[], int &size) {
	if (size < 1) cout << "Array is empty.";
	else 
		for (unsigned int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
}