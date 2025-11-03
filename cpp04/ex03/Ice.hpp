/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:51:06 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 10:51:41 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice & ice);
    Ice(const std :: string &type);

    Ice &operator=(const Ice &ice);
    void use(Icharacter &target) ;
    AMateria *clone() const;

    ~Ice();
};