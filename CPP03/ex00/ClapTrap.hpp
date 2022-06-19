
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string n);
		ClapTrap(ClapTrap const & copy);
		~ClapTrap(void);

		ClapTrap &operator=(ClapTrap const & copy);
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getname(void) const;
		int	gethitpoints(void) const;
		int	getepoints(void) const;
		int	getadamage(void) const;


	private:
		std::string _name;
		int	_hitpoints;
		int	_epoints;
		int	_adamage;

};


#endif
