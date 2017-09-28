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

void getLengthArray(int intArray[]) {
	for (int i = 0; i < sizeof(intArray); i++) {
		printf(i + "\n");
	}
}

int main()
{
	int number = 21;
	int numArray[7] = {5, 4, 3, 2, 1, 0, -1};

	// Part 1
	std::cout << "Variable value is currently: " << number << endl;
	changeVariable(number);
	changePointer((int*)number);

	// Part 2


	return 0;
}