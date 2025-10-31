/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:40:33 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/31 12:14:40 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // leak Check
    {
        const Animal *i = new Cat();
        const Animal *j = new Dog();

        delete i;
        delete j;
    }
    std ::cout << "\n\n------------------------------------------------------------\n"
               << std::endl;

    // ----------------------
    {
        int size = 20;
        int i = 0;
        Animal **array = new Animal *[size];
        while (i < size)
        {
            if (i > (size / 2))
                array[i] = new Cat();
            else
                array[i] = new Dog();
            i++;
        }
        i = 0;
        while (i < size)
        {
            (array[i])->makeSound();
            delete array[i];
            i++;
        }
        delete[] array;
    }
    std ::cout << "\n\n------------------------------------------------------------\n"
               << std::endl;

    // -------- Deep Copy Test -------------
    {
        Dog dog;
        Dog second_dog(dog);
        std ::cout << "first dog type = " << dog.getType() << " second dog Type = " << second_dog.getType() << std ::endl;
        dog.setType("Husky");
        std ::cout << "first dog type = " << dog.getType() << " second dog Type = " << second_dog.getType() << std ::endl;
    }
}