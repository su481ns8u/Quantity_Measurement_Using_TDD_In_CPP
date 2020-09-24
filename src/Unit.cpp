#include "Unit.hpp"

Unit::Unit(){}

Unit::Unit(double conversion_factor) {
    this->conversion_factor = conversion_factor;
}

Unit Unit::INCH(1.0);
Unit Unit::FEET(12.0);