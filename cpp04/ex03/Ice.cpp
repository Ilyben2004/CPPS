/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:27:00 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:40:48 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//------------------------------------- Constructors -----------------------------------------

Ice ::Ice()
{
    this->type = "ice";
}

Ice ::Ice(const Ice &ice) : AMateria(ice)
{
}
Ice ::Ice(const std ::string &type) : AMateria(type)
{
}
//------------------------------------- Copy Assigment Operator -----------------------------------------

Ice &Ice ::operator=(const Ice &ice)
{
    if (this != &ice)
    {
        this->type = ice.type;
    }
    return (*this);
}

//---------------------------------------------- Methods --------------------------------------------------

AMateria *Ice ::clone() const
{
    Ice *ice = new Ice();
    *ice = *this;
    return (ice);
}

void Ice ::use(ICharacter &target)
{
        std ::cout << "heals "<<target.getName() <<"'s wounds"<<std::endl;

    
}

//--------------------------------------------- Destructor ------------------------------------------------

Ice ::~Ice()
{
}