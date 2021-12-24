#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA : public Weapon
{
    private:
        std::string name;
        Weapon &_weapon;
    public:
        HumanA(std::string n, Weapon& w);
        void        attack();
        void        setName(std::string s);
        std::string getName(void);
};

#endif