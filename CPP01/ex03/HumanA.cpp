
#include "HumanA.hpp"

HumanA::HumanA()
{
    setType("missil");
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << getType() << std::endl;
}
