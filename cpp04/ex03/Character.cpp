/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:51:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 14:30:17 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//------------------------------------- Constructors -----------------------------------------

Character ::Character()
{
    int i = 0;
    std ::cout << "Default Constructor Called Character" << std ::endl;
    while (i < 4)
    {
        inventory[i] = NULL;
        is_equip[i++] = false;
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
        inventory[i] = NULL;
        is_equip[i++] = false;
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
            this->is_equip[i++] = character.is_equip[i];
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
        if (is_equip[i] == false)
        {
            if (inventory[i] != NULL)
                delete inventory[i];
            inventory[i] = m->clone();
            std::cout << "Amteria With Type" << m->getType() << "equiped Sucessfully" << std ::endl;
            is_equip[i] = true;
            return;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    is_equip[idx] = false;
    
}

void Character::use(int idx, ICharacter &target)
{
    if (is_equip[idx] == true)
    {
        std::cout << "inventory at index " << idx << " does not exist" << std::endl;
        return;
    }
    inventory[idx]->use((target));
}

Character::Character()
{
    std::cout << "Destructor Called Character" << std::endl;
    int i = 0;
    while (i < 4)
    {
        if (!(inventory[i] == NULL))
            delete inventory[i];
    }
}