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
