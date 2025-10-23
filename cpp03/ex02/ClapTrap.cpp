/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:06:14 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 12:27:29 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------------------------CONSTRUCTOSRS--------------------------------//

ClapTrap ::ClapTrap()
{
    std ::cout << "Default Constructor Called ClapTrap" << std ::endl;
    health = 10;
    energy = 10;
    damage = 0;
}
ClapTrap ::ClapTrap(std ::string _name)
{
    std ::cout << "Constructor With Name Called ClapTrap" << std ::endl;
    health = 10;
    energy = 10;
    damage = 0;
    name = _name;
}

//-----------------------------------  Getters AND Setters --------------------------------//

void ClapTrap ::setName(std ::string name) { this->name = name; }

void ClapTrap ::setDamage(int damage) { this->damage = damage; }

void ClapTrap ::setEnergy(int energy) { this->energy = energy; }

void ClapTrap ::setHealth(int health) { this->health = health; }

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
    std ::cout << "ClapTrap " << this->name << " attacks " << target << " causing points of damage!" << std ::endl;
    energy--;
}

void ClapTrap ::takeDamage(unsigned int amount)
{
    if (health <= 0)
    {
        std ::cout << "ClapTrap " << this->name << " already dead" << std ::endl;
        return;
    }
    std ::cout << "ClapTrap " << this->name << " damaged " << amount << " of his health!" << std ::endl;
    health -= amount;
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