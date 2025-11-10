/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:51:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:42:38 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
//------------------------------------- Constructors -----------------------------------------

Character ::Character()
{
    int i = 0;
    while (i < 4)
    {
        inventory[i++] = NULL;
    }
}
Character ::Character(const Character &character)
{
    *this = character;
}
Character::Character(const std::string &name)
{
    int i = 0;
    this->name = name;
    while (i < 4)
    {
        inventory[i++] = NULL;
    }
}
//------------------------------------- Copy Assigment Operator -----------------------------------------

Character &Character ::operator=(const Character &character)
{
    int i = 0;
    if (this != &character)
    {
        while (i < 4)
        {
            if (inventory[i] != NULL)
                this->inventory[i] = character.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
            i++;
        }
    }
    return (*this);
}

//---------------------------------- Methods ------------------------------------------------------------
std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (i < 4)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m->clone();
            return;
        }
        i++;
    }   
}

void Character::unequip(int idx)
{
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (inventory[idx] != NULL)
    {
        inventory[idx]->use((target));
        return;
    }
    std::cout << "inventory at index " << idx << " does not exist" << std::endl;
}

Character::~Character()
{
}