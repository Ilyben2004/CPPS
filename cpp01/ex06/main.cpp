#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std ::cout << "YOU NEED 3 ARGUMENTES TO RUN THIS PROGRAMME" << std ::endl;
        return (1);
    }
    std ::string level(av[1]);
    Harl harl;
    harl.complain(level);
}