#include "FixedPoint.hpp"

int main()
{
    int a = 1;
    FixedPoint f;
    f.set_fixed_p(a);
    FixedPoint ff(f);
    a = 3;
    f.set_fixed_p(a);
    std ::cout << " ff = " << ff.get_fixed_p() << std ::endl;
    std ::cout << " f = " << f.get_fixed_p() << std ::endl;
}