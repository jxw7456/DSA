#pragma once
#include "Player.h"
class Fighter :
	public Player
{
public:
	Fighter();
	Fighter(char* playerName, char* weaponSkill, int strength, int dexterity, int finesse);
	~Fighter();
	void printFighter();

private:
	char* weaponSkill;
};
