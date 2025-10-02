#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attack with their " << weapon->getType() << std::endl;
}

void HumanB ::setName(std ::string name)
{
    this->name = name;
}

std ::string &HumanB ::getName()
{
    return (this->name);
}

void HumanB ::setWeapon(Weapon &weapon)
{
    (this->weapon) = &weapon;
}

Weapon &HumanB ::getWeapon()
{
    return *(this->weapon);
}

HumanB :: HumanB (std :: string name)
{
    this->name = name;
    this->weapon = NULL;
}
