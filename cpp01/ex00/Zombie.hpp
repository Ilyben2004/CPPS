#pragma once
#include <string>
#include <iostream>

#define ZOMBIE_VOICE "BraiiiiiiinnnzzzZ"

class Zombie
{
private:
    std ::string name;

public:
    void announce(void);
    ~Zombie();
    void setName(std :: string name);
};

Zombie *newZombie(std ::string name);
void randomChump(std ::string name);