/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:45 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 12:13:32 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap  claptrap = ScavTrap ("ILYAS");
    claptrap.setDamage(2);
    claptrap.attack("SRY");
    claptrap.beRepaired(10);
    return 0;
}