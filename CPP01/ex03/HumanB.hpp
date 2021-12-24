#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB : public Weapon
{
    private:
        std::string name;
        Weapon *_weapon;
    public:
        HumanB(std::string n);
        void        attack();
        void        setWeapon(Weapon& w);
        void        setName(std::string s);
        std::string getName(void);
};

#endif