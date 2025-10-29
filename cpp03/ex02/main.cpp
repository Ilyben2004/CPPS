#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    {
        ClapTrap claptrap = ClapTrap("ILYAS");
        claptrap.setDamage(2);
        claptrap.attack("SRY");
        claptrap.beRepaired(10);
        claptrap.takeDamage(120);
    }
    {
        ScavTrap scarvtrap = ScavTrap("WISHA");
        scarvtrap.attack("E");
        scarvtrap.beRepaired(20);
        scarvtrap.takeDamage(20);
        scarvtrap.guardGate();
    }
    {
        FragTrap fragtrap;
        fragtrap.setName("MOSHA");
        fragtrap.attack("E");
        fragtrap.beRepaired(20);
        fragtrap.takeDamage(20);
        fragtrap.highFivesGuys();
    }
    return 0;
}