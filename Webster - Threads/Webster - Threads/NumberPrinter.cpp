// Experience the unpredictability of threads and attempt to control them
// JaJuan Webster
// Professor Maier
// Threads & Thread Control
#include "stdafx.h"
#include "NumberPrinter.h"
#include <iostream>
using namespace std;

// Constructor
NumberPrinter::NumberPrinter(int number)
{
	this->number = number;
	std::cout << "Constructed" << endl;
}

// Deconstuctor
NumberPrinter::~NumberPrinter()
{
	std::cout << "DESTROY!" << endl;
}

// Print the number 10 times in a row on the same line
void NumberPrinter::Print()
{
	std::cout << number << " ";
}
