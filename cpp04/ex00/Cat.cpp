/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:59:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:31:16 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//--------------------------------------- Constructors -------------------------------------------------

Cat ::Cat()
{
    std::cout << "Cat Default Constructor Called " << std::endl;
    this->type = "Cat";
}

Cat ::Cat(const Cat &cat)
{
    std::cout << "Cat Copy Constructor Called " << std::endl;
    *this = cat;
}

//--------------------------------------- Operators ----------------------------------------------------

Cat &Cat::operator=(const Cat & cat)
{
    if ((this != &cat))
    {
        this->type = cat.getType();
    }
    return (*this);
}

//--------------------------------------- Methods -------------------------------------------------

void Cat ::makeSound() const
{

    std ::cout << "Cat Meows" << std ::endl;
}

//--------------------------------------- Destructor-------------------------------------------------

Cat ::~Cat()
{
    std::cout << "Cat Destructor Called " << std::endl;
}
