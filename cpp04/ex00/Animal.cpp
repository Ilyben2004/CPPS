/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:40:29 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:24:51 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//--------------------------------------- Constructors -------------------------------------------------

Animal ::Animal()
{
    std::cout << "Animal Default Constructor Called " << std::endl;
}

Animal ::Animal(const Animal &a)
{
    *this = a;
}

//--------------------------------------- Operators ----------------------------------------------------

Animal &Animal::operator=(const Animal &a)
{
    if ((this != &a))
    {
        this->type = a.getType();
    }
    return (*this);
}

//----------------------------------------- Methods ------------------------------------------------------

void Animal::setType(const std ::string type)
{
    this->type = type;
}

std ::string Animal ::getType() const
{
    return (type);
}

void Animal ::makeSound(void) const
{
    std ::cout << "Animal Is Making Sound" << std ::endl;
}

//----------------------------------------- Destructors -------------------------------------------------

Animal ::~Animal()
{
    std::cout << "Animal Destructor Called " << std::endl;
}