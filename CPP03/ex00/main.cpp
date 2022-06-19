
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Luis");

	a.attack("Laura");
	a.takeDamage(4);
	a.beRepaired(2);
	a.takeDamage(10);
	a.beRepaired(4);

	return 0;
}
