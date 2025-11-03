/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:18:59 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 10:44:29 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure & cure);
    Cure(const std :: string &type);

    Cure &operator=(const Cure &cure);
    void use(Icharacter &target) ;
    AMateria *clone() const;

    ~Cure();
};