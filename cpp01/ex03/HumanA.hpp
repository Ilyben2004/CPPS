#pragma once
#include "Weapon.hpp"

class HumanA
{

private:
    Weapon &weapon;
    std ::string name;

public:
    HumanA(std :: string name, Weapon &_weapon);
    void attack();
    void setName(std :: string name);
    std :: string & getName();
    void setWeapon(Weapon &weapon);
    Weapon & getWeapon ();
};
