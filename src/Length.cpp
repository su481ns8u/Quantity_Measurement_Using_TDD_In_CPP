#include "Length.hpp"

Length::Length(Unit unit, double value)
{
    this->value = value;
    this->unit = unit;
}

bool Length::operator==(Length that) const
{
    return (this->value == that.value &&
            typeid(this->value).name() == typeid(that.value).name());
}

bool Length::operator==(Length *that) const
{
    if (that == nullptr)
        return false;
    return (this->value == that->value &&
            typeid(this->value).name() == typeid(that->value).name());
}