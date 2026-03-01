#pragma once
#include <vector>
class ROOM
{
public:
    std::vector<bool> walls;
    std::vector<bool> windows;
    bool roof = false;

    ROOM(int wallsCount, int windowsCount)
    {
        walls.resize(wallsCount, false);
        windows.resize(windowsCount, false);
    }
};