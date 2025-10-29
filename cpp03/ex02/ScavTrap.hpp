#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap(std ::string name);
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &scarvtrap);

    ScavTrap &operator=(const ScavTrap &scarvtrap);

    void guardGate();
    void attack(const std ::string &target);
};
