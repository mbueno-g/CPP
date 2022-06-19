
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Luis");

	a.attack("Laura");
	a.takeDamage(4);
	a.beRepaired(2);
	a.takeDamage(10);
	a.beRepaired(4);

	ScavTrap	b("Luis");

	b.attack("Laura");
	b.takeDamage(4);
	b.beRepaired(2);
	b.takeDamage(10);
	b.beRepaired(4);
	b.guardGate();

	FragTrap	c("Luis");

	c.attack("Laura");
	c.takeDamage(4);
	c.beRepaired(2);
	c.takeDamage(10);
	c.beRepaired(4);
	c.highFiveGuys();

	return 0;
}
