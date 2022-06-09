#include "Zombie.hpp"

// Para heap tienes que utilizar randomChump y para stack no??

int main()
{
    std::cout << "STACK MEMORY -- ZOMBIE" << std::endl;
    randomChump("Ana");

    std::cout << "HEAP MEMORY -- ZOMBIE" << std::endl;
    Zombie *z = newZombie("Javier");
    z->announce();
    delete z;

    return (0);
}
