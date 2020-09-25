#include "Quantity.hpp"

Quantity::Quantity(Unit unit, double value)
{
    this->value = value;
    this->unit = unit;
}

bool Quantity::operator==(Quantity that) const
{
    return (this->value == that.value &&
            typeid(this->value).name() == typeid(that.value).name());
}

bool Quantity::operator==(Quantity *that) const
{
    if (that == nullptr)
        return false;
    return (this->value == that->value &&
            typeid(this->value).name() == typeid(that->value).name());
}

bool Quantity::compare(Quantity that)
{
    if (this->unit.quantity_type != TEMPERATURE)
        return this->unit.get_base(this->value) == that.unit.get_base(that.value);
    return this->unit.get_base_for_temp(this->value) == that.unit.get_base_for_temp(that.value);
}

// bool Quantity::compare_temperatures(Quantity that)
// {
// }

double Quantity::operator+(Quantity that)
{
    return this->unit.get_base(this->value) + that.unit.get_base(that.value);
}