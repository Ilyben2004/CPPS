/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:27:53 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 11:02:52 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

//--------------------------------------- Constructors -------------------------------------------------

Dog ::Dog()
{
    std::cout << "Dog Default Constructor Called " << std::endl;
    this->type = "Dog";
    brain = NULL;
}

Dog ::Dog(const Dog &dog)
{
    std::cout << "Dog Copy Constructor Called " << std::endl;
    *this = dog;
    brain = NULL;
}

//--------------------------------------- Operators ----------------------------------------------------

Dog &Dog::operator=(const Dog &dog)
{
    if ((this != &dog))
    {
        this->type = dog.getType();
    }
    return (*this);
}

//--------------------------------------- Methods -------------------------------------------------

void Dog ::makeSound() const
{

    std ::cout << "Dog barks" << std ::endl;
}

Brain *Dog::getBrain() const { return (this->brain); }

void Dog::setBrain(Brain *brain) { this->brain = brain; }

//--------------------------------------- Destructor-------------------------------------------------

Dog ::~Dog()
{
    std::cout << "Dog Destructor Called " << std::endl;
}
