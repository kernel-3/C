#pragma once
#include <string>
using std::string;

// Car Interface
class ICar
{
public:
    virtual string Name() = 0;
};

// Bike Interface
class IBike
{
public:
    virtual string Name() = 0;
};
