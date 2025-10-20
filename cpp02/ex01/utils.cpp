#include "utils.hpp"

std ::ostream &operator<<(std ::ostream &out, Fixed const &c)
{
    return (out << c.toFloat());
}
