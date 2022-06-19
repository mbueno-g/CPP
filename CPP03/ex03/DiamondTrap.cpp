
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScravTrap(""), FragTrap("")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->_name = "";
	this->_hitpoints = 100;
	this->_epoints = 50;
	this->_adamage = 20;
}

DiamondTrap::DiamondTrap(std::string n) : ScravTrap(n + "__clap__name") , FragTrap(n + "__clap__name")
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;
	this->_name = n;
	this->_hitpoints = 100;
	this->_epoints = 50;
	this->_adamage = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ScravTrap(copy), FragTrap(copy)
{
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & copy)
{
	this->_name = copy.getname();
	this->_hitpoints = copy.gethitpoints();
	this->_epoints = copy.getepoints();
	this->_adamage = copy.getadamage();
	
	return(*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}


