#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA : public Weapon
{
    public:
        HumanA();
        std::string name;
        void attack();
};

#endif