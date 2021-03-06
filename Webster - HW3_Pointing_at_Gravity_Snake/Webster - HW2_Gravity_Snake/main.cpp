// Webster - HW3_Pointing_at_Gravity_Snake.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Pointing at Gravity Snake 
// Professor Maier

#include "stdafx.h"
#include "snake.h"
#include "Box2D\Box2D.h"
#include <iostream>
#include <string>
#include <crtdbg.h>
#include <conio.h>
using namespace std;

// Attributes
b2Vec2* TargetLocations;
b2Vec2* currentLocation;
typedef;

int targetNum = 0;
int numStart = 0;
int score = 0;

// Introduce the game to the user with instructions as to the keys to press
int main(int argc, char** argv)
{
	B2_NOT_USED(argc);
	B2_NOT_USED(argv);

	// Create the physics world (b2world)
	b2Vec2 gravity(0.0f, -10.f);	// define the gravity vector
	b2World world(gravity);

	// Create your snake (physics body b2body)
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;	// responds to forces
	bodyDef.position.Set(0.0f, 4.0f);
	b2Body* snake = world.CreateBody(&bodyDef);

	b2PolygonShape snakeBox;
	snakeBox.SetAsBox(1.0f, 1.0f);

	b2FixtureDef fixtureDef;
	fixtureDef.shape = &snakeBox;
	fixtureDef.density = 1.0f;
	fixtureDef.friction = 0.3f;

	snake->CreateFixture(&fixtureDef);

	// Intro
	std::cout << "Welcome to Gravity Snake!\n" << endl;

	setupTargets(targetNum);

	std::cout << "Press the 'WASD' keys to move the snake towards the target.\n\n";

	// Timer
	b2Timer timer;

	// Create a while loop to keep running until the user hits ESC or you get the total number of targets
	// The physics world will update the snake based on gravity and the other forces automatically
	currentLocation = &TargetLocations[numStart];

	while (kbhit() != 'esc' || targetNum > 0) {

		processInput(snake, world);

		update(world);

		display(*currentLocation, snake->GetPosition());

		// Check if snake is in range or is equal to the target
		if (snake->GetPosition().x > (currentLocation->x - 0.7) && snake->GetPosition().x < (currentLocation->x + 0.7) || snake->GetPosition().x == currentLocation->x)
			if (snake->GetPosition().y > (currentLocation->y - 0.7) && snake->GetPosition().y < (currentLocation->y + 0.7) || snake->GetPosition().y == currentLocation->y) {

				std::cout << "Target Hit\n\n" << endl;

				// Score system
				if (timer.GetMilliseconds() < 100) {
					score += 500;
				}

				else {
					score += 100;
				}

				currentLocation++;

				// Check target hits
				if (selectNextTarget() == false) {
					std::cout << "You hit all of the targets!" << endl;
					std::cout << "Final Score: " << score << "\n\n" << endl;
					break;
				}

				else {

				}
			}
	}

	_getch();
	return 0;
}