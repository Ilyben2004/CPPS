/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:38:04 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/09 21:18:49 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    {
        Ice *ice = new Ice();
        ice->getType();
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        me->equip(tmp);
        me->equip(tmp);
        me->equip(tmp);
        me->equip(tmp);
        me->equip(tmp);
        me->equip(tmp);
        me->unequip(0);
        me->unequip(0);
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    {

        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter *me = new Character("Ilyas");

        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter *bob = new Character("Bob");

        me->use(0, *bob);
        me->use(1, *bob);

        me->unequip(0);

        me->use(0, *bob);

        me->equip(src->createMateria("ice"));
        me->equip(src->createMateria("cure"));
        me->equip(src->createMateria("ice"));
        me->equip(src->createMateria("cure"));
        for (int i = 0; i < 4; i++)
            me->use(i, *bob);

        delete bob;
        delete me;
        delete src;

        return 0;
    }
}