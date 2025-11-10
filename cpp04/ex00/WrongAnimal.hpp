/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:27:04 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/10 14:28:20 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
    std ::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &wrong_animal);

    WrongAnimal &operator=(const WrongAnimal &a);

    void makeSound(void) const;
    void setType(const std ::string type);
    std::string getType() const;

    virtual ~WrongAnimal();
};
