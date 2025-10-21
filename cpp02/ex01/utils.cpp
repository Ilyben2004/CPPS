/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:15 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/20 12:29:16 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std ::ostream &operator<<(std ::ostream &out, Fixed const &c)
{
    return (out << c.toFloat());
}
