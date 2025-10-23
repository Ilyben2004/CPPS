/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:15 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/21 17:35:22 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std ::ostream &operator<<(std ::ostream &out, Fixed const &c)
{
    return (out << c.toFloat());
}

int ft_pow(int a, int b)
{
    int pow = 1;
    while (b--)
    {
        pow = pow * a;
    }
    return (pow);
}