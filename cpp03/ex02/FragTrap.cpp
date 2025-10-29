#include "FragTrap.hpp"

//-----------------------------------CONSTRUCTOSRS--------------------------------//

FragTrap ::FragTrap()
{
    std ::cout << "Default Constructor Called FragTrap" << std ::endl;
    health = 100;
    energy = 100;
    damage = 30;
}

FragTrap ::FragTrap(std ::string name) : ClapTrap(name)
{
    std ::cout << "Constructor With Name Called FragTrap" << std ::endl;
    health = 100;
    energy = 100;
    damage = 30;
}

FragTrap ::FragTrap(const FragTrap &fragtrap)
{
    std ::cout << "Copy Constructor Called FragTrap" << std ::endl;
    *this = fragtrap;
}
//-----------------------------------  Assignment Operator --------------------------------//

FragTrap &FragTrap ::operator=(const FragTrap &fragtrap)
{
    if (this == &fragtrap)
        return (*this);
    this->setDamage(fragtrap.getDamage());
    this->setEnergy(fragtrap.getEnergy());
    this->setHealth(fragtrap.getHealth());
    this->setName(fragtrap.getName());
    return (*this);
}

// ------------------------------------------- METHODS --------------------------------------//

void FragTrap ::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}

//----------------------------------- DESTRUCTOSRS --------------------------------//

FragTrap ::~FragTrap()
{
    std ::cout << "Destructor Called FragTrap" << std ::endl;
}