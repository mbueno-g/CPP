
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_epoints = 100;
	this->_adamage = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_epoints = 100;
	this->_adamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const & copy)
{
	this->_name = copy.getname();
	this->_hitpoints = copy.gethitpoints();
	this->_epoints = copy.getepoints();
	this->_adamage = copy.getadamage();
	
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->getname() << " highfives!" << std::endl;
}
