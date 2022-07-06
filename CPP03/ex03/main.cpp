
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap d("D");

	d.attack("X");
	d.takeDamage(6);
	d.beRepaired(4);
	d.takeDamage(3);
	d.guardGate();
	d.highFiveGuys();
	d.whoAmI();
	d.beRepaired(8);
	d.takeDamage(17);
	
	ClapTrap	a("A");

	a.attack("Y");
	a.takeDamage(4);
	a.beRepaired(2);
	a.takeDamage(10);
	a.beRepaired(4);

	ScavTrap	b("B");

	b.attack("V");
	b.takeDamage(4);
	b.beRepaired(2);
	b.takeDamage(10);
	b.beRepaired(4);
	b.guardGate();

	FragTrap	c("C");

	c.attack("W");
	c.takeDamage(4);
	c.beRepaired(2);
	c.takeDamage(10);
	c.beRepaired(4);
	c.highFiveGuys();

	return 0;
}
