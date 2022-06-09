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
    std::cout << this->zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}
