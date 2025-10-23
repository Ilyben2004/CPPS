/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:45 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 11:05:44 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap = ClapTrap("ILYAS");
    claptrap.setDamage(2);
    claptrap.attack("SRY");
    claptrap.beRepaired(10);
    return 0;
}