#ifndef FEET_H
#define FEET_H
#include "Unit.hpp"

using namespace std;

class Length
{
    double value;
    Unit unit;

public:
    Length(Unit unit, double value);
    bool operator==(Length that) const;
    bool operator==(Length *that) const;
    bool compare(Length that);
    double operator+(Length that);
};

#endif