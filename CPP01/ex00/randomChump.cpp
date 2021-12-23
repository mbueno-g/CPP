#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie z (name);

    z.setname(name);
    z.announce();
}