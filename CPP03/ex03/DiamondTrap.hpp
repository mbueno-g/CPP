
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string n);
		DiamondTrap(ClapTrap const & copy);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const & copy);
		
		void attack(std::string const &target);
		void whoAmI(void);
	
	private:
		std::string _name;
};

#endif
