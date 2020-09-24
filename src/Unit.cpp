#include "Unit.hpp"

Unit::Unit() {}

Unit::Unit(double conversion_factor, Qunatity_Types quantity_type)
{
    this->conversion_factor = conversion_factor;
    this->quantity_type = quantity_type;
}

Unit Unit::INCH(1.0, LENGTH);
Unit Unit::FEET(12.0, LENGTH);
Unit Unit::YARD(36.0, LENGTH);
Unit Unit::CM(0.4, LENGTH);

Unit Unit::GALLON(3.78, VOLUME);
Unit Unit::LITRE(1.0, VOLUME);
Unit Unit::ML(0.001, VOLUME);

double Unit::get_base(double value)
{
    return this->conversion_factor * value;
}