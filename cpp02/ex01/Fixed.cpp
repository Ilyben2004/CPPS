
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
    value = ((float)fixed_p / (float)(256));
    return (value);
}

int Fixed ::toInt() const
{
    int value;
    value = fixed_p >> 8;
    return (value);
}
