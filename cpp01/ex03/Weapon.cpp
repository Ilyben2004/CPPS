#include "Weapon.hpp"

std ::string &Weapon ::getType()
{
    std ::string &typeREF = type;
    return (typeREF);
}

void Weapon ::setType(std ::string type)
{
    this->type = type;
}

Weapon::Weapon(std ::string type)
{
    this->type = type;
}
