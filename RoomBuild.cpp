#include "RoomBuild.h"
#include "ROOM.h"

RoomBuilder::RoomBuilder(int walls, int windows)
{
    wallsCount = walls;
    windowsCount = windows;
    reset();
}

void RoomBuilder::reset()
{
    result = new ROOM(wallsCount, windowsCount);
}

void RoomBuilder::buildStep1()
{
    for (int i = 0; i < wallsCount; i++)
    {
        result->walls[i] = true;
    }
}

void RoomBuilder::buildStep2()
{
    for (int i = 0; i < windowsCount; i++)
    {
        result->windows[i] = true;
    }
}

void RoomBuilder::buildStep3()
{
    result->roof = true;
}

ROOM* RoomBuilder::getResult()
{
    ROOM* room = result;
    reset();
    return room;
}