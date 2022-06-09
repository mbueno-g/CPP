#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << zname << " is dead" <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name)
{
    zname = name;
}
