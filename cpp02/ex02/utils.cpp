/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:04:39 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/14 14:04:40 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std ::ostream &operator<<(std ::ostream &out, Fixed const &c)
{
    return (out << c.toFloat());
}
