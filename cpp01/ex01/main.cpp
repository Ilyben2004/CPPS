#include "Zombie.hpp"

int main ()
{
    Zombie *zombie =  newZombie("ZAYN");
    randomChump("ZOMBIE HAHA");
    zombie->announce();
    delete zombie;
}