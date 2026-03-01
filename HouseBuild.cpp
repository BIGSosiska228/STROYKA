#include "HouseBuild.h"
#include"HOUSE.h"

HouseBuilder::HouseBuilder(int wallsCountHouse)
{
    wallsCount = wallsCountHouse;
    reset();
}

void HouseBuilder::reset()
{
    result = new HOUSE(wallsCount);
}

void HouseBuilder::buildStep1()
{
    for (int i = 0; i < wallsCount; i++)
    {
        result->walls[i] = true;
    }
}

void HouseBuilder::buildStep2()
{
    result->foundation = true;
}

void HouseBuilder::buildStep3()
{
    result->roof = true;
}

HOUSE* HouseBuilder::getResult()
{
    HOUSE* house = result;
    reset();
    return house;
}