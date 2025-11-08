#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const
{
    const std::string& str = type;
    return str;
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}