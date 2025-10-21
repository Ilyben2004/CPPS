/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:47 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/20 12:29:48 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
    int fixed_p;
    static const int size = 8;

public:
    Fixed();
    Fixed(const Fixed &f);

    Fixed &operator=(const Fixed &f);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    ~Fixed();
};