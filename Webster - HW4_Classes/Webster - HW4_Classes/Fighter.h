#pragma once
#include "Player.h"
class Fighter : public Player
{
public:
	Fighter();
	Fighter(char* playerName, char* weaponSkill, int strength, int dexterity, int finesse);
	~Fighter();
	void printFighter();
	void attack(Player* player) override;

private:
	char* weaponSkill;
};
