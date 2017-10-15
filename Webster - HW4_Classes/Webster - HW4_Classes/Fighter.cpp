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
}

void Fighter::printFighter()
{
	printPlayer();
	std::cout << "Weapon Skill: " << weaponSkill << endl;
}
