#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap  scarvtrap = ScavTrap ("ILYAS");
    scarvtrap.attack("E");
    scarvtrap.beRepaired(20);
    scarvtrap.takeDamage(20);
    return 0;
}