#pragma once
#include <vector>
class HOUSE
{
public:
	std::vector<bool> walls;
	bool foundation = false;
	bool roof = false;

	HOUSE(int wallsCountHouse)
	{
		walls.resize(wallsCountHouse, false);
	}
};