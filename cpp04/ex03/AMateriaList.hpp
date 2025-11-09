/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaList.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:06:22 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 13:13:36 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Node.hpp"
#include <cstddef>
class AMateriaList
{
private:
    struct Node *head;
    bool alreadyExist(Node * node);

public:
    AMateriaList();
    AMateriaList(const AMateriaList & amateria_list);

    AMateriaList & operator=(const AMateriaList & amateria_list);
    void addNode(struct Node *node);
    ~AMateriaList();
};