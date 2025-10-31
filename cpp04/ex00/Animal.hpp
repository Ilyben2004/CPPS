/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:34:44 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 12:05:17 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
    std ::string type;

public:
    Animal(const Animal &animal);
    Animal();

    Animal &operator=(const Animal &a);

    virtual void makeSound(void) const;
    void setType(const std ::string type);
    std::string getType() const;

    virtual ~Animal();
};
