/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:04:08 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 15:06:48 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateriaList.hpp"
#include "ICharacter.hpp"   
#include <string>
#include <iostream>
#include <new>

class AMateria
{
protected:
    std ::string type;
    static AMateriaList amateria_garbage;
public:
    AMateria();
    AMateria(const AMateria &amateria);
    AMateria(const std ::string &type);
    
    void addNode(); 
    AMateria & operator=(const AMateria & amteria);
    const std :: string & getType() const;
    void setType(const std :: string &type);
    virtual AMateria * clone() const = 0;
    virtual void use(ICharacter &target);
    
    virtual ~AMateria();
};