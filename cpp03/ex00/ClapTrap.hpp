#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std ::string name;
    unsigned int health;
    unsigned int energy;
    unsigned int damage;

public:
    ClapTrap();
    ClapTrap(std ::string _name);
    ClapTrap(const ClapTrap &claptrap);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap claptrap);
    void setName(std ::string name);
       void setHealth(unsigned int health);
    void setEnergy(unsigned int energy);
    void setDamage(unsigned int damage);

    std ::string getName() const;
    int getHealth() const;
    int getEnergy() const;
    int getDamage() const;

    void attack(const std ::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
