/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:20:25 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 12:34:02 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std ::cout << "COnstructor With Name Called ClapTrap" << std ::endl;
    health = 100;
    energy = 100;
    damage = 30;
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