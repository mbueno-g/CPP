
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// por que se soluciona poniendo Weapon();

// Weapon is store as a pointer in HumanB because HumanB may not always have
// a Weapon so the pointer can be NULL
// The Weapon is passed as a reference to avoid copying big objects

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }

    return (0);
}