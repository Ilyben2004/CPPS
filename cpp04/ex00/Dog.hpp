/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:41:13 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:29:18 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog & dog);
    
    Dog & operator=(const Dog &dog);
    void makeSound() const;


    ~Dog();
};
