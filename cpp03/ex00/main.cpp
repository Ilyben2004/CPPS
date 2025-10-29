#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap = ClapTrap("ILYAS");
    claptrap.setDamage(2);
    claptrap.attack("SRY");
    claptrap.beRepaired(10);
    claptrap.takeDamage(120);
    return 0;
}