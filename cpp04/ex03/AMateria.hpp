/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:04:08 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 14:12:54 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
    std ::string type;
public:
    AMateria();
    AMateria(const AMateria &amateria);
    AMateria(const std ::string &type);
    
    AMateria & operator=(const AMateria & amteria);
    const std :: string & getType() const;
    void setType(const std :: string &type);
    virtual AMateria * clone() const = 0;
    virtual void use(ICharacter &target);
    
    virtual ~AMateria();
};