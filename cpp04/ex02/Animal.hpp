/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:34:44 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 14:53:36 by ibennaje         ###   ########.fr       */
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
    bool operator==(const Animal &a);

    virtual void makeSound(void) const = 0;
    void setType(const std ::string type);
    std::string getType() const;
    

    virtual ~Animal();
};
