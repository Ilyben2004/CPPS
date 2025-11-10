/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:40:29 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:29:58 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//--------------------------------------- Constructors -------------------------------------------------

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor Called " << std::endl;
}

WrongAnimal ::WrongAnimal(const WrongAnimal &a)
{
    *this = a;
}

//--------------------------------------- Operators ----------------------------------------------------

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    if ((this != &a))
    {
        this->type = a.getType();
    }
    return (*this);
}

//----------------------------------------- Methods ------------------------------------------------------

void WrongAnimal::setType(const std ::string type)
{
    this->type = type;
}

std ::string WrongAnimal ::getType() const
{
    return (type);
}

void WrongAnimal ::makeSound(void) const
{
    std ::cout << "Animal Is Making Sound" << std ::endl;
}

//----------------------------------------- Destructors -------------------------------------------------

WrongAnimal ::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called " << std::endl;
}