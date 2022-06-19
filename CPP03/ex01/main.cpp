
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

	return 0;
}
