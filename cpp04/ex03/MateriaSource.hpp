/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:40:34 by ibennaje          #+#    #+#             */
/*   Updated: 2025/11/03 15:24:31 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria * learned_amateria[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &materia_source);

    MateriaSource &operator=(const MateriaSource &materia_source);
    void learnMateria(AMateria *m) override;
    AMateria *createMateria(std ::string const &type) override;

    ~MateriaSource();
};