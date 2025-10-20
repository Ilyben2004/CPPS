/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:04:05 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/14 15:26:35 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------------------------------- constructors --------------------------------------------//

Fixed ::Fixed()
{
    std::cout << "Default constructor called" << std ::endl;
    this->fixed_p = 0;
}

Fixed ::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std ::endl;
    this->fixed_p = f.getRawBits();
}

Fixed ::Fixed(const int a)
{
    std::cout << "Int constructor called" << std ::endl;
    fixed_p = (a << this->size);
}

Fixed ::Fixed(const float a)
{
    std::cout << "Float constructor called" << std ::endl;
    float new_float = roundf((a * 256));
    fixed_p = new_float;
}
// ----------------------------------- Member Functions  --------------------------------------------//

int Fixed ::getRawBits() const
{
    std ::cout << "getRawBits member function called" << std ::endl;
    return (fixed_p);
}

void Fixed ::setRawBits(int const raw)
{
    std ::cout << "setRawBits member function called" << std ::endl;
    this->fixed_p = raw;
}

float Fixed ::toFloat() const { return (((float)fixed_p / (float)(256))); }

int Fixed ::toInt() const { return (fixed_p >> 8); }

// ----------------------------------- Operators  --------------------------------------------//
Fixed &Fixed::operator=(const Fixed &f)
{
    std ::cout << "Copy assignment operator called" << std ::endl;
    if (this != &f)
        this->fixed_p = (f.getRawBits());
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &f)
{
    std ::cout << "* Operatot Called this = " << this->toFloat() << std ::endl;

    this->fixed_p = this->fixed_p * (f.getRawBits());
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
    std ::cout << "infinite " << std ::endl;
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
Fixed &Fixed::min(Fixed &f1, Fixed &f2) { return (f1 > f2 ? f2 : f1); }

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    std ::cout << "max no constant" << std::endl;
    return (f1 > f2 ? f1 : f2);
}

Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) { return (min((Fixed)f1, (Fixed)f2)); }

Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) 
{
    std ::cout << "max  constant" << std::endl;
    return ((const Fixed) f1 > (const Fixed)f2 ? f1 : f2);
}
// ----------------------------------- Destructor --------------------------------------------//
Fixed ::~Fixed()
{
    std ::cout << "Destructor called" << std ::endl;
}
