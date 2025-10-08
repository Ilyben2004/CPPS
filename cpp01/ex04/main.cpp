#include "MySed.hpp"

int main(int ac, char **av)
{
    if (ac != 5)
        std :: cout << "YOU NEED 4 ARGUMENTES TO RUN THIS PROGRAMME" << std :: endl;
    MySed test(av[1], av[2], av[3], av[4]);
    return (test.ft_sed());
}   