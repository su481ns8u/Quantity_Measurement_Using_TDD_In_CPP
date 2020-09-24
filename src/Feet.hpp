#ifndef FEET_H
#define FEET_H
#include <iostream>

using namespace std;

class Feet
{
    double value;

public:
    Feet(double);
    bool operator==(Feet) const;
    bool operator==(Feet *) const;
};

#endif