#include "ScavTrap.hpp"

//-----------------------------------CONSTRUCTOSRS--------------------------------//

ScavTrap ::ScavTrap(std ::string name) : ClapTrap(name)
{
    std ::cout << "Constructor With Name Called ScavTrap" << std ::endl;
    health = 100;
    energy = 50;
    damage = 20;
}
ScavTrap ::ScavTrap()
{
    std ::cout << "Default Constructor Called ScavTrap" << std ::endl;
    health = 100;
    energy = 50;
    damage = 20;
}

ScavTrap ::ScavTrap(const ScavTrap &scarvtrap)
{
    std ::cout << "Copy Constructor Called ScavTrap" << std ::endl;
    *this = scarvtrap;
}

//-----------------------------------  Assignment Operator --------------------------------//

ScavTrap &ScavTrap ::operator=(const ScavTrap &scarvtrap)
{
    if (this == &scarvtrap)
        return (*this);
    this->setDamage(scarvtrap.getDamage());
    this->setEnergy(scarvtrap.getEnergy());
    this->setHealth(scarvtrap.getHealth());
    this->setName(scarvtrap.getName());
    return (*this);
}

// ------------------------------------------- METHODS --------------------------------------//

void ScavTrap::attack(const std ::string &target)
{
    if (health <= 0 || energy == 0)
    {
        std ::cout << "ScavTrap " << this->name << "has 0 " << (health <= 0 ? "health" : "") << (energy <= 0 ? "And 0 energy" : "") << std ::endl;
        return;
    }
    std ::cout << "ScavTrap " << this->name << " attacks " << target << " causing points of damage!" << std ::endl;
    energy--;
}

void ScavTrap::guardGate()
{
    std ::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std ::endl;
}

//----------------------------------- DESTRUCTOSRS --------------------------------//

ScavTrap ::~ScavTrap()
{
    std ::cout << "Destructor Called ScavTrap" << std ::endl;
}