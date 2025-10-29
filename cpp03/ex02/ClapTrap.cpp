#include "ClapTrap.hpp"

//-----------------------------------CONSTRUCTOSRS--------------------------------//

ClapTrap ::ClapTrap()
{
    std ::cout << "Default COnstructor Called ClapTrap" << std ::endl;
    health = 10;
    energy = 10;
    damage = 0;
}
ClapTrap ::ClapTrap(std ::string _name)
{
    std ::cout << "COnstructor With Name Called ClapTrap" << std ::endl;
    health = 10;
    energy = 10;
    damage = 0;
    name = _name;
}

ClapTrap ::ClapTrap(const ClapTrap &claptrap)
{
    std ::cout << "COnstructor With Name Called ClapTrap" << std ::endl;
    *this = claptrap;
}

//-----------------------------------  Assignment Operator --------------------------------//

ClapTrap &ClapTrap ::operator=(const ClapTrap claptrap)
{
    if (this == &claptrap)
        return (*this);
    this->setDamage(claptrap.getDamage());
    this->setEnergy(claptrap.getEnergy());
    this->setHealth(claptrap.getHealth());
    this->setName(claptrap.getName());
    return (*this);
}

//-----------------------------------  Getters AND Setters --------------------------------//

void ClapTrap ::setName(std ::string name) { this->name = name; }

void ClapTrap ::setDamage(unsigned int damage) { this->damage = damage; }

void ClapTrap ::setEnergy(unsigned int energy) { this->energy = energy; }

void ClapTrap ::setHealth(unsigned int health) { this->health = health; }

std ::string ClapTrap ::getName() const { return name; }

int ClapTrap ::getDamage() const { return damage; }

int ClapTrap ::getHealth() const { return health; }

int ClapTrap ::getEnergy() const { return energy; }

// ------------------------------------------- METHODS --------------------------------------//

void ClapTrap ::attack(const std ::string &target)
{
    if (health <= 0 || energy == 0)
    {
        std ::cout << "ClapTrap " << this->name << "has 0 " << (health <= 0 ? "health" : "") << (energy <= 0 ? "And 0 energy" : "") << std ::endl;
        return;
    }
    std ::cout << "ClapTrap " << this->name << " attacks " << target << " causing "<< damage <<" points of damage!" << std ::endl;
    energy--;
}

void ClapTrap ::takeDamage(unsigned int amount)
{
    if (health > 0)
    {
        if (amount > health)
        {
            std ::cout << "ClapTrap " << name << " damaged " << health << std ::endl;
            health = 0;
        }
        else
        {
            std ::cout << "ClapTrap " << name << " damaged " << amount << std ::endl;
            health = health - amount;
        }
    }
    else
        std ::cout << "ClapTrap " << name << " Already Dead" << std ::endl;
}
void ClapTrap ::beRepaired(unsigned int amount)
{
    if (health <= 0 || energy == 0)
    {
        std ::cout << "ClapTrap " << this->name << " has 0 " << (health <= 0 ? "health" : "") << (energy <= 0 ? "And 0 energy" : "") << std ::endl;
        return;
    }
    std ::cout << "ClapTrap " << this->name << " repaired " << amount << " of his health!" << std ::endl;
    health += amount;
    energy--;
}

//----------------------------------- DESTRUCTOSRS --------------------------------//

ClapTrap ::~ClapTrap()
{
    std ::cout << "Destructor Called ClapTrap" << std ::endl;
}