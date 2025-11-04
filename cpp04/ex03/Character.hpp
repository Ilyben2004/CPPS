/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:05:38 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 15:53:52 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
private:
    AMateria *inventory[4];
    bool is_equip[4];
    std :: string name;

public:
    Character();
    Character(const Character & character);
    Character(const std :: string &name);
    
    Character &operator = (const Character &character);
    std :: string const &getName() const ;
    void equip(AMateria * m) ;
    void unequip(int idx) ;
    void use(int idx , ICharacter & target) ;

    ~Character();
};