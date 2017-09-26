// JaJuan Webster
// Gravity Snake
// Professor Maier

#pragma once
#include "Box2D\Box2D.h"

void update(b2World world);

void display(b2Vec2 target, b2Vec2 snake);

void applyForces(b2Body* body);

void moveTarget(b2Vec2 target, float& xPos, float& yPos);
