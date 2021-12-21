#include "Zombie.hpp"

int main()
{
    std::cout << "STACK MEMORY -- ZOMBIE" << std::endl;
    randomChump("Ana");

    //alocar
    std::cout << "HEAP MEMORY -- ZOMBIE" << std::endl;
    Zombie *z = newZombie("Javier");
    z->announce();
    delete z;
}