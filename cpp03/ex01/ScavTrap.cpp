/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:16:00 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 12:16:01 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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