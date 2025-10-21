/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibennaje <ibennaje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:50 by ibennaje          #+#    #+#             */
/*   Updated: 2025/10/20 12:29:52 by ibennaje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
