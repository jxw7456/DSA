// Webster - HW4_Classes.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Professor Maier
// HW4: Classes

#include "stdafx.h"
#include "Player.h"
#include <iostream>
using namespace std;

// Variables
Player player = Player();
Player paraPlayer = Player("Unknown", 10, 10, 10);
Player* heapDefault = new Player();
Player* heapPara = new Player("Unknown", 10, 10, 10);

int main()
{
	// PART 1: CLASSES
	player.printPlayer();
	//paraPlayer.printPlayer();
	heapDefault->printPlayer();
	heapPara->printPlayer();

	delete heapDefault;
	delete heapPara;
    return 0;
}

