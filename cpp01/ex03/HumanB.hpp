#pragma once
#include "Weapon.hpp"

class HumanB
{

private:
    Weapon *weapon;
    std ::string name;

public:
    HumanB(std :: string name);
    void attack();
    void setName(std ::string name);
    std ::string &getName();
    void setWeapon(Weapon &weapon);
    Weapon &getWeapon();
};
