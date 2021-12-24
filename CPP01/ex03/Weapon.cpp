
#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string s)
{
    type = s;
}

std::string Weapon::getType()
{
    const std::string& str = type;
    return str;
}

void    Weapon::setType(std::string s)
{
    type = s;
}