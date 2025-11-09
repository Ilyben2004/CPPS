/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:51:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 21:08:08 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
//------------------------------------- Constructors -----------------------------------------

Character ::Character()
{
    int i = 0;
    std ::cout << "Default Constructor Called Character" << std ::endl;
    while (i < 4)
    {
        inventory[i++] = NULL;
    }
}
Character ::Character(const Character &character)
{
    std ::cout << "Copy Constructor Called Character" << std ::endl;
    *this = character;
}
Character::Character(const std::string &name)
{
    int i = 0;
    std ::cout << "Constructor With Args Called Character" << std ::endl;
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
            std::cout << "Amteria With Type " << m->getType() << " equiped Sucessfully at index" << i << std ::endl;
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
    std::cout << "Destructor Called Character" << std::endl;
}