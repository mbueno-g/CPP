
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const & copy);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const & copy);
		
		void	highFiveGuys(void);
};

#endif
