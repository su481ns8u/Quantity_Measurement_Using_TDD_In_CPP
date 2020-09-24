#ifndef FEET_H
#define FEET_H
#include "Unit.hpp"

using namespace std;

class Length
{
    double value;
    Unit unit;

public:
    Length(Unit, double);
    bool operator==(Length) const;
    bool operator==(Length *) const;
    bool Length::compare(Length that);
};

#endif