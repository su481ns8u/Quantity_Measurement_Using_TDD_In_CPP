#include "Feet.hpp"

Feet::Feet(double value)
{
    this->value = value;
}

bool Feet::operator==(Feet that) const
{
    return (this->value == that.value &&
            typeid(this->value).name() == typeid(that.value).name());
}

bool Feet::operator==(Feet *that) const
{
    if (that == nullptr)
        return false;
    return (this->value == that->value &&
            typeid(this->value).name() == typeid(that->value).name());
}