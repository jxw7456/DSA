// Webster - HW2_Gravity_Snake.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Gravity Snake
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
int targetNum = 0;
int score = 0;

// Introduce the game to the user with instructions as to the keys to press
int main(int argc, char** argv)
{
	B2_NOT_USED(argc);
	B2_NOT_USED(argv);

	// Intro
	std::cout << "Welcome to Gravity Snake!\n" << endl;
	std::cout << "Press the 'WASD' keys to move the snake towards the target.\nTen target hits will win you the game...\n\n";

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

	// Target
	b2Vec2 target(3.0f, -1.0f);

	// Timer
	b2Timer timer;

	// Create a while loop to keep running until the user hits ESC or you get the total number of targets
	// The physics world will update the snake based on gravity and the other forces automatically
	while (kbhit() != 'esc' || targetNum < 10) {
				
		applyForces(snake);

		update(world);

		display(target, snake->GetPosition());
		
		// Check if snake is in range or is equal to the target
		if (snake->GetPosition().x > (target.x - 0.7) && snake->GetPosition().x < (target.x + 0.7) || snake->GetPosition().x == target.x)
			if (snake->GetPosition().y >(target.y - 0.7) && snake->GetPosition().y < (target.y + 0.7) || snake->GetPosition().y == target.y) {

			std::cout << "Target Hit\n\n" << endl;

			targetNum += 1;

			// Score system
			if (timer.GetMilliseconds() < 100) {
				score += 500;
			}

			else
			{
				score += 100;
			}

			// Check target hits
			if (targetNum == 10) {
				std::cout << "You hit all of the targets!" << endl;
				std::cout << "Final Score: " << score << "\n\n" << endl;
				break;
			}

			else {
				double x = rand() % 11 + (-5);
				double y = rand() % 11 + (-5);
				moveTarget(target, x, y);
			}
		}
	}

	_getch();
	return 0;
}