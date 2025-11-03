
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:05:38 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 14:14:08 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    AMateria *inventory[4];
    bool is_equip[4];
    std :: string name;

public:
    Character();
    Character(const Character & character);
    Character(const std :: string &name);
    
    Character &operator = (const Character &character);
    std :: string const &getName() const override;
    void equip(AMateria * m) override;
    void unequip(int idx) override;
    void use(int idx , ICharacter & target) override;

    ~Character();
};