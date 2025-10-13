#pragma once
#include <iostream>

class FixedPoint
{
private:
    int fixed_p;
    static const int size = 8;

public:
    FixedPoint();
    FixedPoint(const FixedPoint &f);
    void set_fixed_p(int fixed_p);
    int get_fixed_p() const;
    FixedPoint &operator=(const FixedPoint &f);
    ~FixedPoint();
};