#include "Player.h"
#include "Ship.h"
#include "GameMode.h"

Player::Player(std::unique_ptr<GameMode> GM) : count(_count)
{
}

void Player::init()
{
	for (int i = 0; i < count; ++i)
	{
		arrShip.emplace_back(new Ship());
	}


}
