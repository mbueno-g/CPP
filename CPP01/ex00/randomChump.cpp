#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << zname << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    randomChump(std::string name)
{
    Zombie z (name);

    z.setname(name);
    z.announce();
}