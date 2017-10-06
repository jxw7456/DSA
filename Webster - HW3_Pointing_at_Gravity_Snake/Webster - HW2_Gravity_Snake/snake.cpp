// JaJuan Webster
// Pointing at Gravity Snake 
// Professor Maier

#include "stdafx.h"
#include "snake.h"
#include "Box2D\Box2D.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
extern b2Vec2* TargetLocations;
extern b2Vec2* currentLocation;
extern int targetNum;
extern int numStart;
typedef;

// Updates the physics world
void update(b2World& world)
{
	world.Step(1.0f / 10.0f, 6, 2);
}

// Displays the position of the target and the player
void display(const b2Vec2& target, const b2Vec2& snake)
{
	std::cout << "Target: " << target.x << ", " << target.y << " ---> Snake: " << snake.x << ", " << snake.y << endl;
}

// Reads the key presses and applies the forces to the player to move
// Does NOT move player directly
void applyForces(b2Body* body)
{
	// Check if there is a keypress (kbhit)
	// If there is a key press then call the applyForces function
	if (kbhit)
	{
		char input = _getch();
		switch (input)
		{
		case 'w':
			std::cout << "\n'W' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, 100), true);
			break;

		case 'a':
			std::cout << "\n'A' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(-100, 0), true);
			break;

		case 's':
			std::cout << "\n'S' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, -100), true);
			break;

		case 'd':
			std::cout << "\n'D' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(100, 0), true);
			break;
		default:
			std::cout << "\nDon't forget the gravity!" << endl;
			break;
		}
	}
}

// Moves the target tot a new location
// Location will be in the range of -5.0 -> 5.0 in X and -5.0 -> 5.0 in Y
void moveTarget(b2Vec2& target, float xPos, float yPos)
{
	target.x = xPos;
	target.y = yPos;
}

// set a function pointer to be used for the forces and then at the end of the function just call that function pointer
void processInput(b2Body* player, b2World& world)
{
	// Check if there is a keypress (kbhit)
	// If there is a key press then call the applyForces functions
	if (kbhit)
	{
		char input = _getch();
		switch (input)
		{
		case 'w':
			std::cout << "\n'W' is pressed. UP" << endl;
			ApplyForceUp(*player);
			break;

		case 'a':
			std::cout << "\n'A' is pressed. LEFT" << endl;
			ApplyForceLeft(*player);
			break;

		case 's':
			std::cout << "\n'S' is pressed. DOWN" << endl;
			ApplyForceDown(*player);
			break;

		case 'd':
			std::cout << "\n'D' is pressed. RIGHT" << endl;
			ApplyForceRight(*player);
			break;
		case 'x':
			std::cout << "\n'X' is pressed. Stop right there!" << endl;
			StopMoving(*player);
			break;
		case 'r':
			std::cout << "\n'R' is pressed. Reverse!" << endl;
			ReverseGravity(world);
			break;
		default:
			std::cout << "\nDon't forget the gravity!" << endl;
			break;
		}
	}
}

// Move Player Up 'W'
void ApplyForceUp(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(0, 100), true);
}

// Move Player Down 'S'
void ApplyForceDown(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(0, -100), true);
}

// Move Player Left 'A'
void ApplyForceLeft(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(-100, 0), true);
}

// Move Player Right 'D'
void ApplyForceRight(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(100, 0), true);
}

// Stop snake from moving
void StopMoving(b2Body& player)
{
	player.SetLinearVelocity(b2Vec2(0, 0));
}

// Reverse the gravity
void ReverseGravity(b2World& world)
{
	world.SetGravity(b2Vec2((world.GetGravity().x * -1), (world.GetGravity().y * -1)));
}

// Prompt user for number of targets to use in game
void setupTargets(int cnt)
{
	while (cnt < 1 || cnt > 10) {
		std::cout << "How many targets do you want in the game: ";
		std::cin >> cnt;

		if (cnt >= 1 && cnt <= 10) {
			std::cout << "You have " << cnt << " targets total.\n\n";
			break;
		}

		else {
			std::cout << "Invalid input.\n" << endl;
		}
	}

	TargetLocations = new b2Vec2[cnt + 1];

	for (int i = 0; i < cnt; i++) {
		double x = ((rand() % 11) + (-5));
		double y = ((rand() % 11) + (-5));
		TargetLocations[i] = b2Vec2(x, y);
	}

	TargetLocations[cnt + 1] = b2Vec2(-1000, -1000);
}

// Returns if there are no more targets are not
bool selectNextTarget()
{
	if (*currentLocation == TargetLocations[targetNum + 1]) {
		return false;
	}

	else {
		return true;
	}
}