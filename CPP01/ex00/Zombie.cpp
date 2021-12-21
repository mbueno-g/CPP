#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << zname << " is dead" <<std::endl;
}

Zombie::Zombie(std::string name)
{
    zname = name;
}

void    Zombie::setname(std::string name)
{
    zname = name;
}