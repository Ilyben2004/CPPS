/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:59:34 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 10:18:33 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{

public:

    Cat();
    Cat (const Cat & cat);
    
    Cat &operator=(const Cat & cat);
    void makeSound(void) const;
    
    ~Cat();
};
