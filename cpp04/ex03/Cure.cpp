/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:27:00 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:40:20 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//------------------------------------- Constructors -----------------------------------------

Cure ::Cure()
{
    this->type = "cure";
}

Cure ::Cure(const Cure &cure) : AMateria(cure)
{
}
Cure ::Cure(const std ::string &type) : AMateria(type)
{
}
//------------------------------------- Copy Assigment Operator -----------------------------------------

Cure &Cure ::operator=(const Cure &cure)
{
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
}
//