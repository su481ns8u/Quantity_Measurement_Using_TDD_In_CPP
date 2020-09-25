#ifndef UNIT_H
#define UNIT_H
#include <iostream>

using namespace std;

enum Qunatity_Types
{
    LENGTH,
    VOLUME,
    WEIGHT,
    TEMPERATURE
};

class Unit
{
public:
    Qunatity_Types quantity_type;
    double conversion_factor;

private:
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

    static Unit KG;
    static Unit GRAM;
    static Unit TONNE;

    static Unit CELSIUS;
    static Unit FAHREANHEAT;

    double get_base(double value);
};

#endif