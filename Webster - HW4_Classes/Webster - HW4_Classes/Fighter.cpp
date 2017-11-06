#include "stdafx.h"
#include "Fighter.h"
#include <iostream>
using namespace std;


Fighter::Fighter()
{
	weaponSkill = "Duel Swords";
}

Fighter::Fighter(char * playerName, char* weaponSkill, int strength, int dexterity, int finesse)
{
	Player(playerName, strength, dexterity, finesse);
	this->weaponSkill = weaponSkill;
}

Fighter::~Fighter()
{
	std::cout << "Destroying fighter object\n" << endl;
}

void Fighter::printFighter()
{
	printPlayer();
	std::cout << "Weapon Skill: " << weaponSkill << endl;
}

void Fighter::attack(Player* player)
{
	std::cout << "Fighter hits " << player->getName() << " with a weapon!" << endl;
}
