/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:04:08 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 15:14:50 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Icharacter;
class AMateria
{
protected:
    std ::string type;
    // atrributes
public:
    AMateria();
    AMateria(const AMateria &amateria);
    AMateria(const std ::string &type);
    
    AMateria & operator=(const AMateria & amteria);
    const std :: string & getType() const;
    virtual AMateria * clone() const = 0;
    virtual void use(Icharacter &target);
    
    
};