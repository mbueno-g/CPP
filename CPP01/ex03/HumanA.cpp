
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon& w) : _weapon (w)
{
    name = n;
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << _weapon.getType() << std::endl;
}

void HumanA::setName(std::string s)
{
    name = s;
}

std::string HumanA::getName(void)
{
    return (name);
}