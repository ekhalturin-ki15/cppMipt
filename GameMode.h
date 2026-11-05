#pragma once
#include <vector>
#include <memory>
struct Player;
struct GameMode
{
	std::vector<int> v;

	GameMode();

	std::shared_ptr<Player> pl;

};

