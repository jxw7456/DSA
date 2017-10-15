// Webster - HW4_Classes.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Professor Maier
// HW4: Classes

#include "stdafx.h"
#include "Player.h"
#include "Fighter.h"
#include <iostream>
using namespace std;

// Variables
Player player = Player();
Player paraPlayer = Player("Unknown", 10, 10, 10);
Player* heapDefault = new Player();
Player* heapPara = new Player("Unknown", 10, 10, 10);
Fighter fighter = Fighter();
Fighter paraFighter = Fighter("Unknown", "Duel Swords", 10, 10, 10);

int main()
{
	// PART 1: CLASSES
	player.printPlayer();
	//paraPlayer.printPlayer();	Once the program leaves the method, it throws the variables away. Nothing is in the memory to be printed
	heapDefault->printPlayer();
	heapPara->printPlayer();

	delete heapDefault;
	delete heapPara;

	// PART 2: INHERITANCE
	fighter.printFighter();
	paraFighter.printFighter();

	// PART 3: VIRTUAL METHODS AND DESTRUCTORS

	return 0;
}
