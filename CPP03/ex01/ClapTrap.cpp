
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hitpoints(10), _epoints(10), _adamage(0)
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n): _name(n), _hitpoints(10), _epoints(10), _adamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}


std::string ClapTrap::getname(void) const
{
	return this->_name;
}


int	ClapTrap::gethitpoints(void) const
{
	return this->_hitpoints;
}


int	ClapTrap::getepoints(void) const
{
	return this->_epoints;
}


int	ClapTrap::getadamage(void) const
{
	return this->_adamage;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	*this = copy;
}


ClapTrap &ClapTrap::operator=(ClapTrap const & copy)
{
	this->_name = copy.getname();
	this->_hitpoints = copy.gethitpoints();
	this->_epoints = copy.getepoints();
	this->_adamage = copy.getadamage();
	
	return(*this);
}


void ClapTrap::attack(std::string const & target)
{
	this->_hitpoints -= this->getadamage();
	std::cout << "ClapTrap " << this->getname() << " attack " << target << ", causing " << this->getadamage() << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_epoints -= amount;
	if (this->_epoints <= 0)
		std::cout << "ClapTrap " << this->getname() << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_epoints += amount;
	std::cout << "ClapTrap " << this->getname() << " has been repaired, now it has " << this->_epoints << " energy points" << std::endl;
}

