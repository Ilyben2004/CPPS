/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaList.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:31:08 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 13:11:26 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaList.hpp"
#include "AMateria.hpp"

AMateriaList::AMateriaList()
{
    this->head = NULL;
}


bool AMateriaList::alreadyExist(Node * node)
{
    Node *tmp = head;
    AMateria * data = node->data;
    while (tmp)
    {
        if (tmp->data == data)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}
void AMateriaList::addNode(Node *node)
{
    Node *front;
    std::cout << "I will Add Node : " << node->data->getType() << std::endl;
    if (head == NULL)
    {
        head = node;
        return;
    }
    if (alreadyExist(node))
        delete node;
    front = head;
    while (front->next != NULL)
        front = front->next;
    front->next = node;
    node->next = NULL;
    std::cout<< "----------------------------------------------------------------------"<<std::endl;
}
AMateriaList::~AMateriaList()
{
    Node *to_clean;
    while (head)
    {
        to_clean = head;
        head = head->next;
        if (to_clean->data)
            delete to_clean->data;
        delete to_clean;
    }
}