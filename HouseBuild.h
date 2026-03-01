#pragma once
#include "Builder.h"
#include "HOUSE.h"

class HouseBuilder : public Builder
{
private:
    HOUSE* result;
    int wallsCount;

public:
    HouseBuilder(int wallsCountHouse);

    void reset() override;
    void buildStep1() override;
    void buildStep2() override;
    void buildStep3() override;

    HOUSE* getResult();
};