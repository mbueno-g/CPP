#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << zname << " is dead" <<std::endl;
}

Zombie::Zombie(std::string name)
{
    zname = name;
}

void    Zombie::announce(void)
{
    std::cout << zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name)
{
    zname = name;
}