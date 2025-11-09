/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:08:29 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 12:10:06 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

class AMateria;
struct Node
{
    AMateria *data;
    Node *next;

    Node(AMateria *_data);

};
