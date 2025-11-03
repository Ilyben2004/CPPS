/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:43:32 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 15:31:28 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//------------------------------------ Constructors -----------------------------------------
MateriaSource::MateriaSource()
{
    int i = 0;
    std::cout << "Default Constructor called MateriaSource" << std::endl;
    while (i < 4)
        learned_amateria[i++] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materia_source)
{
    std::cout << "Default Constructor called MateriaSource" << std::endl;
    *this = materia_source;
}
//------------------------------------ Copy Assigment Operator ---------------------------

MateriaSource &MateriaSource::operator=(const MateriaSource &materia_source)
{
    int i = 0;
    if (this != &materia_source)
    {
        while (i < 4)
        {
            learned_amateria[i] = materia_source.learned_amateria[i];
            i++;
        }
    }
    return (*this);
}

//------------------------------------ Methods---------------------------------------------

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while (i < 4)
    {
        if (learned_amateria[i] != NULL)
            learned_amateria[i] = m->clone();
        i++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while ((i < 4))
    {
        if (type.compare(learned_amateria[i]->getType()) == 0)
            return (learned_amateria[i]->clone());
        i++;
    }
    return (NULL);
}

//------------------------------------ Destructor ----------------------------------------

MateriaSource::~MateriaSource()
{
    std ::cout<<"Default Destructor Called MateriSource"<<std::endl;
}
