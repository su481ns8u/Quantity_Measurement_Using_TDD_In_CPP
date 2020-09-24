#ifndef UNIT_H
#define UNIT_H
#include <iostream>

using namespace std;

class Unit
{
    double conversion_factor;
    Unit(double conversion_factor);

public:
    Unit();
    static Unit INCH;
    static Unit FEET;
};

#endif