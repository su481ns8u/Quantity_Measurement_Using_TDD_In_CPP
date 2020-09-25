#ifndef FEET_H
#define FEET_H
#include "Unit.hpp"

using namespace std;

class Quantity
{
    double value;
    Unit unit;

public:
    Quantity(Unit unit, double value);
    bool operator==(Quantity that) const;
    bool operator==(Quantity *that) const;
    bool compare(Quantity that);
    // bool compare_temperatures(Quantity that);
    double operator+(Quantity that);
};

#endif