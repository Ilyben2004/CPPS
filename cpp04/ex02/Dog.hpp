/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:41:13 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:35:17 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &dog);

    Dog &operator=(const Dog &dog);
    void makeSound() const;

    ~Dog();
};
