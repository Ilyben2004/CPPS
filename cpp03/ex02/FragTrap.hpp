/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:20:18 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/23 12:26:10 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(std ::string name);
    FragTrap();
    ~FragTrap();
    void highFivesGuys(void);
};
