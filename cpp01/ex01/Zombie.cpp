#include "Zombie.hpp"

void Zombie ::announce(void)
{
    std ::cout << this->name << " : " << ZOMBIE_VOICE << std ::endl;
}

Zombie :: ~Zombie()
{
    std :: cout << this->name << " is dead" << std :: endl;
}

void Zombie::setName(std :: string name)
{
    this->name = name;
}
