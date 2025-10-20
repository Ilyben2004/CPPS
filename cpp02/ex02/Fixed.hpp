/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:04:17 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/14 15:26:03 by ibennaje         ###   ########.fr       */
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
    Fixed &operator*(const Fixed &f);
    Fixed &operator/(const Fixed &f);
    Fixed &operator-(const Fixed &f);
    Fixed &operator+(const Fixed &f);

    Fixed &operator++();
    Fixed operator++(int);

    bool operator>(const Fixed &f2) const;
    bool operator<(const Fixed &f);
    bool operator==(const Fixed &f);
    bool operator!=(const Fixed &f);
    bool operator>=(const Fixed &f);
    bool operator<=(const Fixed &f);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt() const;

    static Fixed &min(Fixed &f1, Fixed &f2);
    static Fixed &min(const Fixed &f1, const Fixed &f2);
    static Fixed &max(Fixed &f1, Fixed &f2);
    static Fixed &max(const Fixed &f1, const Fixed &f2) ;
    ~Fixed();
};
