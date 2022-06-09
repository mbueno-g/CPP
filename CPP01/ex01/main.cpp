
#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int     N;
    int     i;

    N = 5;
    z = zombieHorde(N, "ZOMBIE");
    if (!z)
    {
        std::cerr << "Allocation fail" << std::endl;
        return (1);
    }
    i = 0;
    while (i < N)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
    return (0);
}
