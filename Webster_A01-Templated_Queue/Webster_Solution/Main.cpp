// JaJuan Webster
// Assignment 01
// Professor Bobadilla
// Templated Queue
#ifndef _MAIN_CPP
#define _MAIN_CPP

#include "Main.h"
#include <iostream>

#endif //_MAIN_CPP

using namespace std;

int main()
{
	// Initialize for INT
	Temp_Queue<int> myQueue1 = Temp_Queue<int>();

	// Print Method
	myQueue1.Print();

	// Push Method
	myQueue1.Push(1);
	myQueue1.Push(50);
	myQueue1.Push(9876);
	myQueue1.Push(212);

	std::cout << "pushed " << myQueue1.GetSize() << " entries -->\n" << endl;

	// Print
	myQueue1.Print();

	// Pop
	myQueue1.Pop();
	myQueue1.Pop();

	std::cout << "popped 2 entries -->\n" << endl;

	// Print
	myQueue1.Print();

	// Check if empty
	bool empty = myQueue1.IsEmpty();

	if (empty)
	{
		std::cout << "Queue is EMPTY\n" << endl;
	}

	else
	{
		std::cout << "Queue is NOT EMPTY\n" << endl;
	}

	// Check the size
	int size = myQueue1.GetSize();
	std::cout << "There are " << size << " entries in the 'myQueue1'\n" << endl;

	// Rule of three -->
	Temp_Queue<int> overloadQueue = Temp_Queue<int>();

	std::cout << "Copy into another 'myQueue1' using the overloaded operator\n" << endl;
	overloadQueue.operator=(myQueue1);

	// Print overloadQueue
	overloadQueue.Print();

	Temp_Queue<int> copyQueue = Temp_Queue<int>(overloadQueue);

	std::cout << "Copy into another 'myQueue1' using the copy constructor\n" << endl;

	// Print copyQueue
	copyQueue.Print();

	// NOW TRY ANOTHER DATA STRUCTURE
	// Initialize for CHAR
	Temp_Queue<char> myQueue2 = Temp_Queue<char>();

	// Print Method
	myQueue2.Print();

	// Push Method
	myQueue2.Push('W');
	myQueue2.Push('E');
	myQueue2.Push('B');
	myQueue2.Push('S');
	myQueue2.Push('T');
	myQueue2.Push('E');
	myQueue2.Push('R');
	myQueue2.Push('!');

	std::cout << "pushed " << myQueue2.GetSize() << " entries -->\n" << endl;

	// Print
	myQueue2.Print();

	// Pop
	myQueue2.Pop();
	myQueue2.Pop();
	myQueue2.Pop();

	std::cout << "popped 3 entries -->\n" << endl;

	// Print
	myQueue2.Print();

	// Check if empty
	bool empty2 = myQueue2.IsEmpty();

	if (empty2)
	{
		std::cout << "Queue is EMPTY\n" << endl;
	}

	else
	{
		std::cout << "Queue is NOT EMPTY\n" << endl;
	}

	// Check the size
	int size2 = myQueue2.GetSize();
	std::cout << "There are " << size2 << " entries in the 'myQueue2'\n" << endl;

	// Rule of three -->
	Temp_Queue<char> overloadQueue2 = Temp_Queue<char>();

	std::cout << "Copy into another 'myQueue2' using the overloaded operator\n" << endl;
	overloadQueue2.operator=(myQueue2);

	// Print overloadQueue2
	overloadQueue2.Print();

	Temp_Queue<char> copyQueue2 = Temp_Queue<char>(overloadQueue2);

	std::cout << "Copy into another 'myQueue2' using the copy constructor\n" << endl;

	// Print copyQueue
	copyQueue2.Print();

	// End Program
	std::cout << "PRESS ENTER TO FINISH";
	getchar();
	return 0;
}