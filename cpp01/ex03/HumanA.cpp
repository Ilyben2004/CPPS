#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

void HumanA ::setName(std ::string name)
{
    this->name = name;
}

std ::string &HumanA ::getName()
{
    return (this->name);
}

void HumanA ::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

Weapon &HumanA ::getWeapon()
{
    return (this->weapon);
}

HumanA ::HumanA(std ::string name, Weapon &_weapon) :  weapon(_weapon)
{
    this->name = name;
}
