#include "GameMode.h"
#include <filesystem>
#include <fstream>
#include <typeinfo>
#include <type_traits>
GameMode::GameMode()
{
	//std::typeid(*this).name();
	std::ifstream in("GameMode.txt");
	int n; in >> n;
	v.resize(n);
	for (auto& it : v)
		in >> it;

	pl = std::shared_ptr<Player>
		(new Player(this));


}
