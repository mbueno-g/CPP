#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
    name = n;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setName(std::string s)
{
    name = s;
}

std::string HumanB::getName(void)
{
    return (name);
}

void HumanB::setWeapon(Weapon &w)
{
    _weapon = &w;
}