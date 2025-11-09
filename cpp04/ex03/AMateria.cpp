/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:57:33 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 15:19:44 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//------------------------------------- Constructors -----------------------------------------
AMateriaList AMateria::amateria_garbage;

AMateria ::AMateria()
{
    std ::cout << "Default Constructor Called AMateria" << std ::endl;
}

AMateria ::AMateria(const AMateria &amateria)
{
    std ::cout << "Copy Constructor Called AMateria" << std ::endl;
    *this = amateria;
}

AMateria ::AMateria(const std ::string &type)
{
    std ::cout << "Constructor With Args Called  AMateria" << std ::endl;
    this->type = type;
}

//--------------------------------- Copy Assigment Operator Called ---------------------------------------

AMateria &AMateria ::operator=(const AMateria &amateria)
{
    if (this != &amateria)
        this->type = amateria.type;
    return (*this);
}

void * AMateria::operator new(std::size_t size)
{
    void * amateria = ::operator new(size);
    AMateria::addNode(amateria);
    return(amateria);
}

//---------------------------------------------- Methods --------------------------------------------------

void AMateria ::setType(const std ::string &type)
{
    this->type = type;
}

const std ::string &AMateria ::getType() const
{
    return (this->type);
}

void AMateria ::use(ICharacter &target)
{
    (void)(target);
}

void AMateria::addNode(void *data)
{
    (AMateria::amateria_garbage).addNode(new Node(data));
}

//------------------------------------- Destructor --------------------------------------------------

AMateria ::~AMateria()
{
    std ::cout << "Default Destructor Called AMateria" << std ::endl;
}