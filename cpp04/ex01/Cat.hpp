/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:59:34 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:33:10 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"


class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &cat);

    Cat & operator=(const Cat &cat);
    void makeSound(void) const;

    ~Cat();
};
