#include "Director.h"

Director::Director(Builder* b)
{
    builder = b;
}

void Director::setBuilder(Builder* b)
{
    builder = b;
}

void Director::build(Type type)
{
    builder->reset();

    if (type == Type::Stone)
    {
        builder->buildStep1();
        builder->buildStep2();
    }
    else if (type == Type::Wood)
    {
        builder->buildStep1();
        builder->buildStep2();
        builder->buildStep3();
    }
    else if (type == Type::Brick)
    {
        builder->buildStep1();
        builder->buildStep2();
    }
}
