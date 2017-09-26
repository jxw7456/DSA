// JaJuan Webster
// Gravity Snake
// Professor Maier

#pragma once
#include "Box2D\Box2D.h"

void update();

void display(b2Vec2 target, b2Vec2 snake);

void applyForces(b2Body* body);

void moveTarget(float& xPos, float& yPos);
