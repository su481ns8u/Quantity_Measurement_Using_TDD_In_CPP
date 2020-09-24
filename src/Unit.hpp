#ifndef UNIT_H
#define UNIT_H
#include <iostream>

using namespace std;

enum Qunatity_Types
{
    LENGTH,
    VOLUME
};

class Unit
{
    double conversion_factor;
    Qunatity_Types quantity_type;
    Unit(double conversion_factor, Qunatity_Types quantity_type);

public:
    Unit();
    static Unit INCH;
    static Unit FEET;
    static Unit YARD;
    static Unit CM;
    static Unit GALLON;
    static Unit LITRE;
    static Unit ML;

    double get_base(double value);
};

#endif