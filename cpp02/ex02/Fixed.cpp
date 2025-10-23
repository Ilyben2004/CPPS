/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:04:05 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/21 17:29:37 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "utils.hpp"

// ----------------------------------- constructors --------------------------------------------//

Fixed ::Fixed()
{
    this->fixed_p = 0;
}

Fixed ::Fixed(const Fixed &f)
{
    this->fixed_p = f.getRawBits();
}

Fixed ::Fixed(const int a)
{
    fixed_p = (a << this->size);
}

Fixed ::Fixed(const float a)
{
    float   new_float = roundf((a * ft_pow(2,size)));
    fixed_p = new_float;
    
}
// ----------------------------------- Member Functions  --------------------------------------------//

int Fixed ::getRawBits() const
{
    return (fixed_p);
}

void Fixed ::setRawBits(int const raw)
{
    this->fixed_p = raw;
}

float Fixed ::toFloat() const { return (((float)fixed_p / (float)(ft_pow(2,size)))); }

int Fixed ::toInt() const { return (toFloat()); }

// ----------------------------------- Operators  --------------------------------------------//
Fixed &Fixed::operator=(const Fixed &f)
{
    if (this != &f)
        this->fixed_p = (f.getRawBits());
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &f)
{
    float a;
    float b;
    float result;
    a = toFloat();
    b = f.toFloat();
    result = a * b;
    result = roundf(result * ft_pow(2,size));
    this->fixed_p = result;
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &f)
{

    this->fixed_p = this->fixed_p / (f.getRawBits());
    return (*this);
}
Fixed &Fixed::operator-(const Fixed &f)
{

    this->fixed_p = this->fixed_p - (f.getRawBits());
    return (*this);
}

Fixed &Fixed::operator+(const Fixed &f)
{

    this->fixed_p = this->fixed_p + (f.getRawBits());
    return (*this);
}

Fixed &Fixed ::operator++()
{
    this->fixed_p = this->fixed_p + 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed f(*this);
    this->fixed_p = this->fixed_p + 1;
    return (f);
}

bool Fixed ::operator==(const Fixed &f) { return (f.getRawBits() == this->fixed_p); }

bool Fixed ::operator!=(const Fixed &f) { return !(*this == f); }

bool Fixed ::operator>(const Fixed &f) const { return (this->fixed_p > f.getRawBits()); }

bool Fixed ::operator<(const Fixed &f) { return !(*this > f); }

bool Fixed ::operator>=(const Fixed &f) { return (*this == f || *this > f); }

bool Fixed ::operator<=(const Fixed &f) { return (*this == f || *this < f); }

// ----------------------------------- Static Functions --------------------------------------------//

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{

    if (f1 > f2)
        return (f1);
    return (f2);
}
Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{

    if (f1 > f2)
        return (f2);
    return (f1);
}

// ----------------------------------- Destructor --------------------------------------------//
Fixed ::~Fixed()
{
}
