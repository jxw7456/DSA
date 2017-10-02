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
	for (int i = 0; i < sizeOfArray; i++) {
		ptArray[i] = i;
	}
	return ptArray;
}

int main()
{
	int number = 21;
	int numArray[7] = {5, 4, 3, 2, 1, 0, -1};
	int *arrayPt = numArray;
	int *stackPt;
	int *heapPt;

	// Part 1
	std::cout << "Variable value is currently: " << number << endl;
	changeVariable(number);
	changePointer((int*)number);

	// Part 2
	std::cout << "Results:\n" << getLengthArray(arrayPt) << " elements" << endl;
	std::cout << "Results:\n" << getLengthPointer(arrayPt) << " elements\n" << endl;

	// Part 3
	stackPt = createStackArray();
	heapPt = createHeapArray(5);

	std::cout << "Stack Array:\n" << stackPt[0] << "\n" << endl;
	std::cout << "Heap Array:\n" << heapPt[0] << endl;

	delete[] stackPt;
	delete[] heapPt;

	stackPt = nullptr;
	heapPt = nullptr;

	// The stack is saving the memory while in the method, but once you leave the method the variables
	// are dumped since the stack only uses them temperarily. This is why the code crashes because there
	// is nothing in the location anymore. The heap on the other hand holds on to the reference
	// of the array until the user deletes it themselves.
	
	return 0;
}