
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string n);
		DiamondTrap(ClapTrap const & copy);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const & copy);

	private:
		std::string _name;
	



		
};

#endif
