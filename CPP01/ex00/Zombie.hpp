#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string zname;
    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    setname(std::string name);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif