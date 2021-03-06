#pragma once
class Player
{
	// Public variables
public:
	Player(); // Default constuctor
	Player(char* playerName, int strength, int dexterity, int finesse); // Parameterized constructor
	~Player(); // Deconstructor
	void printPlayer();
	char* getName();
	virtual void attack(Player* player);

	// Private variables
private:
	char* playerName;
	int strength;
	int dexterity;
	int finesse;
};
