#include "Director.h"
#include "RoomBuild.h"
#include "HouseBuild.h"
#include <iostream>

int main() {
    RoomBuilder* roomBuild = new RoomBuilder(4, 1);

    Director director(roomBuild);

    std::cout << "Строим каменную комнату:" << std::endl;
    director.build(Type::Stone);
    ROOM* StoneRoom = roomBuild->getResult();

    std::cout << "Строим деревянную комнату:" << std::endl;
    director.build(Type::Wood);
    ROOM* WoodRoom = roomBuild->getResult();


    HouseBuilder* houseBuilder = new HouseBuilder(4);
    director.setBuilder(houseBuilder);

    std::cout << "Строим каменный дом:" << std::endl;
    director.build(Type::Stone);
    HOUSE* StoneHouse = houseBuilder->getResult();

    delete StoneRoom;
    delete WoodRoom;
    delete StoneHouse;
    delete roomBuild;
    delete houseBuilder;

    return 0;
}