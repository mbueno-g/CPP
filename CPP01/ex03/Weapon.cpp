
#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    const std::string& str = type;
    return str;
}

void    Weapon::setType(std::string s)
{
    type = s;
}