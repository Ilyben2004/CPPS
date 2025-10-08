#include <iostream>

int main(int ac, char *av[])
{
    int i = 1;
    int j = 0;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
        return (0);
    }
    while (i < ac)
    {
        j = 0;
        std :: string s = av[i];
        while (s[j])
        {
            std::cout<< (char) toupper(s[j]);
            j++;
        }
        std :: cout << ' ';
        i++;
    }
      std::cout << std :: endl;
}