#pragma once
#include "Point.h"
#include <vector>

enum State : char
{
	live,
	dead,
	magic
};


struct Ship
{
	Ship();
	State state;

	std::vector<Point> arrPos;
};

