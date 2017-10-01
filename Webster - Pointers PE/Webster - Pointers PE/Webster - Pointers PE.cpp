// Webster - Pointers PE.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Pointer PE
// Professor Maier

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// alter the value of the variable and print it out
void changeVariable(int num) {
	num = 7;
	std::cout << "\nInside changeVariable() - variable's value is now: " << num << endl;
}

// alter the value of the variable using the dereference operator and print it out
void changePointer(int *num) {
	int num2 = 5;
	num = &num2;
	std::cout << "\nInside changePointer() - variable's value is now: " << num << endl;
}

int getLengthArray(int intArray[]) {
	int numEle = 0;
	for (int i = 0; i < sizeof(intArray); i++) {
		printf(i + "\n");

		if (intArray[i] == -1) {
			return numEle;
		}

		else {
			numEle++;
		}
	}
}

int getLengthPointer(int *intPt) {
	int numEle = 0;
	for (int i = 0; i < sizeof(intPt); i++) {
		printf(i + "\n");

		if (intPt[i] == -1) {
			return numEle;
		}

		else {
			numEle++;
		}
	}
}

int* createStackArray() {
	int ptArray[5] = { 0, 1, 2, 3, 4 };
	return ptArray;
}

int* createHeapArray(int sizeOfArray) {
	int *ptArray = new int[sizeOfArray];
	ptArray[0] = 0;
	ptArray[1] = 1;
	ptArray[2] = 2;
	ptArray[3] = 3;
	ptArray[4] = 4;
	return ptArray;
}

int main()
{
	int number = 21;
	int numArray[7] = {5, 4, 3, 2, 1, 0, -1};
	int *arrayPt = numArray;
	int *stackPt;
	int *heapPt1;
	int *heapPt2;
	int *heapPt3;
	int *heapPt4;
	int *heapPt5;

	// Part 1
	std::cout << "Variable value is currently: " << number << endl;
	changeVariable(number);
	changePointer((int*)number);

	// Part 2
	std::cout << "Results:\n" << getLengthArray(arrayPt) << " elements" << endl;
	std::cout << "Results:\n" << getLengthPointer(arrayPt) << " elements\n" << endl;

	// Part 3
	stackPt = createStackArray();
	heapPt1 = createHeapArray(0);
	heapPt2 = createHeapArray(1);
	heapPt3 = createHeapArray(2);
	heapPt4 = createHeapArray(3);
	heapPt5 = createHeapArray(4);

	std::cout << "Stack Array:\n" << stackPt << "\n" << endl;
	std::cout << "Heap Array:\n" << heapPt1 << "\n" << heapPt2 << "\n" << heapPt3 << "\n" << heapPt4 << "\n" << heapPt5 << endl;

	delete []stackPt;
	//delete []heapPt5;
	//delete []heapPt4;
	//delete []heapPt3;
	//delete []heapPt2;
	//delete []heapPt1;
	
	return 0;
}