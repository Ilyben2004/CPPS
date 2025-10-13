#include "FixedPoint.hpp"

FixedPoint ::FixedPoint()
{
    this->fixed_p = 0;
}

FixedPoint ::FixedPoint(const FixedPoint &f)
{
    this->set_fixed_p(f.get_fixed_p());
}

void FixedPoint ::set_fixed_p(int fixed_p) { this->fixed_p = fixed_p; }

int FixedPoint ::get_fixed_p() const { return (fixed_p); }

FixedPoint ::FixedPoint() { fixed_p = 0; }

FixedPoint &FixedPoint::operator=(const FixedPoint &f)
{
    if (this != &f)
        this->set_fixed_p(f.get_fixed_p());
    return (*this);
}

FixedPoint ::~FixedPoint()
{
    std ::cout << "Destructor called" << std ::endl;
}