#pragma once
#include "Builder.h"
#include "ROOM.h"

class RoomBuilder : public Builder
{
private:
    ROOM* result;
    int wallsCount;
    int windowsCount;

public:
    RoomBuilder(int walls, int windows);

    void reset() override;
    void buildStep1() override;
    void buildStep2() override;
    void buildStep3() override;

    ROOM* getResult();
};