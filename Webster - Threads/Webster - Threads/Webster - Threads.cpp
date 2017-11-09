// Webster - Threads.cpp : Defines the entry point for the console application.
// Experience the unpredictability of threads and attempt to control them
// JaJuan Webster
// Professor Maier
// Threads & Thread Control

#include "stdafx.h"
#include "NumberPrinter.h"
#include <thread>
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++) {
		NumberPrinter* numPrint = new NumberPrinter(7);
		//numPrint->Print();
		thread t
	}
    return 0;
}

