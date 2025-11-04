/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:27:00 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 18:48:32 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//------------------------------------- Constructors -----------------------------------------

Cure ::Cure()
{
    std ::cout << "Default Constructor Called Cure" << std ::endl;
    this->type = "cure";
}

Cure ::Cure(const Cure &cure) : AMateria(cure)
{
    std ::cout << "Copy Constructor Called Cure" << std ::endl;
}
Cure ::Cure(const std ::string &type) : AMateria(type)
{
    std ::cout << "Constructor With Args Called Cure" << std ::endl;
}
//------------------------------------- Copy Assigment Operator -----------------------------------------

Cure &Cure ::operator=(const Cure &cure)
{
    std::cout << "Copy Assigment Operatpr Cure" << std::endl;
    if (this != &cure)
    {
        this->type = cure.type;
    }
    return (*this);
}

//---------------------------------------------- Methods --------------------------------------------------

AMateria *Cure ::clone() const
{
    Cure *cure = new Cure();
    *cure = *this;
    return (cure);
}
void Cure ::use(ICharacter &target)
{
    std ::cout << "Shot an ice bolt at " << target.getName() << std ::endl;
}
//------------------------------------------------- Destructor -----------------------------------------------

Cure ::~Cure()
{
    std ::cout << "Default Destructor Called Cure" << std ::endl;
}
//