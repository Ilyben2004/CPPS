/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:36 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 11:12:40 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#pragma once

class ClapTrap
{
protected:
    std ::string name;
    int health;
    int energy;
    int damage;

public:
    ClapTrap();
    ClapTrap(std ::string _name);
    ~ClapTrap();

    void setName(std ::string name);
    void setHealth(int health);
    void setEnergy(int energy);
    void setDamage(int damage);

    std ::string getName() const;
    int getHealth() const;
    int getEnergy() const;
    int getDamage() const;

    void attack(const std ::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
