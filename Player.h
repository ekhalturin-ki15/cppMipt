#pragma once
#include <vector>
#include <memory>

struct Ship;
struct GameMode;

struct Player
{
	const int count;

	Player(std::unique_ptr<GameMode> GM);

	std::vector<
		std::shared_ptr<Ship>
	> arrShip;

	void init();


};

