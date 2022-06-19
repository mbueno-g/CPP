

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("")
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_epoints = 50;
	this->_adamage = 20;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_epoints = 50;
	this->_adamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & copy)
{
	this->_name = copy.getname();
	this->_hitpoints = copy.gethitpoints();
	this->_epoints = copy.getepoints();
	this->_adamage = copy.getadamage();
	
	return(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	this->_hitpoints -= this->getadamage();
	std::cout << "ScavTrap " << this->getname() << " attack " << target << ", causing " << this->getadamage() << " points of damage" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}

