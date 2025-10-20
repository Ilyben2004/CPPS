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