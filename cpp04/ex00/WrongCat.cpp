/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:59:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:32:42 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//--------------------------------------- Constructors -------------------------------------------------

WrongCat ::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called " << std::endl;
    this->type = "Cat";
}

WrongCat ::WrongCat(const WrongCat &cat)
{
    std::cout << "Cat Copy Constructor Called " << std::endl;
    *this = cat;
}

//--------------------------------------- Operators ----------------------------------------------------

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    if ((this != &cat))
    {
        this->type = cat.getType();
    }
    return (*this);
}

//--------------------------------------- Methods -------------------------------------------------

void WrongCat ::makeSound() const
{

    std ::cout << "Cat Meows" << std ::endl;
}


//--------------------------------------- Destructor-------------------------------------------------

WrongCat ::~WrongCat()
{
    std::cout << "WrongCat Destructor Called " << std::endl;
}
