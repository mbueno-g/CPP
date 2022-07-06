
#include "DiamondTrap.hpp"

/*DiamondTrap::DiamondTrap() : ScravTrap(""), FragTrap("")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->_name = "";
	this->_hitpoints = 100;
	this->_epoints = 50;
	this->_adamage = 20;
}*/

DiamondTrap::DiamondTrap(std::string n)
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;
	this->_name = n;
	ClapTrap::_name = n + "__clap__name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_epoints = ScavTrap::_epoints;
	this->_adamage = FragTrap::_adamage;
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

void DiamondTrap::attack(std::string const &target)
{
	ScravTrap::attack(target);
}
		
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap's name: "<< this->_name << std::endl;
	std::cout << "ClapTrap's name: "<< ClapTrap::_name << std::endl;
}





