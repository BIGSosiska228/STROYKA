#pragma once
#include "Builder.h"

enum class Type {
    Stone,
    Wood,
    Brick
};

class Director
{
private:
    Builder* builder;

public:
    Director(Builder* b);

    void setBuilder(Builder* b);
    void build(Type type);
};