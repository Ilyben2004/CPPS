#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(std ::string name);
    FragTrap();
    FragTrap (const FragTrap & fragtrap);
    
FragTrap &operator=(const FragTrap & fragtrap);
    
    void highFivesGuys(void);
    
    ~FragTrap();
};
