#pragma once
class Builder
{
public:
    virtual void reset() = 0;
    virtual void buildStep1() = 0;
    virtual void buildStep2() = 0;
    virtual void buildStep3() = 0;
};