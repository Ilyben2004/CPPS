/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:33 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/21 17:40:51 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "utils.hpp"

Fixed ::Fixed()
{
    std::cout << "Default constructor called" << std ::endl;
    this->fixed_p = 0;
}

Fixed ::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std ::endl;
    *this = f;
}

Fixed ::Fixed(const int a)
{
    std::cout << "Int constructor called" << std ::endl;
    fixed_p = (a << this->size);
}

Fixed ::Fixed(const float a)
{
    std::cout << "Float constructor called" << std ::endl;
    float new_float = roundf((a * ft_pow(2, 8)));
    fixed_p = new_float;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    std ::cout << "Copy assignment operator called" << std ::endl;
    if (this != &f)
        this->fixed_p = (f.getRawBits());
    return (*this);
}

Fixed ::~Fixed()
{
    std ::cout << "Destructor called" << std ::endl;
}

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
float Fixed ::toFloat() const
{
    float value;
    value = ((float)fixed_p / (float)(ft_pow(2, 8)));
    return (value);
}

int Fixed ::toInt() const
{
    return (toFloat());
}
