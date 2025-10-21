/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:27 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/20 12:29:28 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <ostream>

class Fixed
{
private:
    int fixed_p;
    static const int size = 8;

public:
    Fixed();
    Fixed(const Fixed &f);
    Fixed(const int a);
    Fixed(const float a);

    Fixed &operator=(const Fixed &f);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    
    float toFloat(void) const;
    int toInt() const;
    
    ~Fixed();
};
