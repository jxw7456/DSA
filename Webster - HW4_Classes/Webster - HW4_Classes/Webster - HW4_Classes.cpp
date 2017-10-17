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
int defeated = 0;
const int MAX_NUM = 9;
Player player = Player();
Player paraPlayer = Player("Unknown", 10, 10, 10);
Player* heapDefault = new Player();
Player* heapPara = new Player("Unknown", 10, 10, 10);
Fighter fighter = Fighter();
Fighter paraFighter = Fighter("Unknown", "Duel Swords", 10, 10, 10);
Player* battlers[10];

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
	std::cout << "\n\nThis is The Battle of The Unknowns! Let the best fighter win!\n" << endl;
	for (int i = 0; i < sizeof(battlers); i++) {
		int num = rand() % 2;
		if (num == 0) {
			Player *player = new Player();
			battlers[i] = player;
		}

		else if (num == 1) {
			Fighter *fighter = new Fighter();
			battlers[i] = fighter;
		}
	}

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < sizeof(battlers) / sizeof(Player*); i++) {
			if (battlers[i] == NULL) {
				continue;
			}

			int offset = 1;
			while (battlers[i + offset] == NULL) {
				offset++;
			}

			battlers[i]->attack(battlers[i + offset]);
			delete battlers[i + offset];
			battlers[i + offset] = nullptr;
			defeated++;						
		}
		if (defeated == MAX_NUM) {
				std::cout << "\n\nWe have a winner! " << battlers[0] << " is our champion!" << endl;
				break;
			}
	}
	return 0;
}