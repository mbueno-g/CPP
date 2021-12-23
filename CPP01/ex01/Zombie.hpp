#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


# include <string>
#include <iostream>

class Zombie
{
    private:
        std::string zname;
    public:
        ~Zombie();
        void    announce(void);
        void    setname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif