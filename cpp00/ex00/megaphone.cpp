#include <iostream>

int main(int ac, char *av[])
{
    // int i = 1;
    // int j = 0;

    // if (ac == 1)
    // {
    //     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    //     return (0);
    // }
    // while (i < ac)
    // {
    //     j = 0;
    //     char *string = av[i];
    //     while (string[j])
    //     {
    //         std::cout<< (char) toupper(string[j]);
    //         j++;
    //     }
    //     std :: cout << ' ';
    //     i++;
    // }
    //   std::cout << std :: endl;
    ac++;
    av++;
    while (true)
    {
        std ::cout << "enter something " << std ::endl;
        std ::string s;
        std ::cin >> s;
        std :: cout << "You entred " << s << std :: endl;
        
    }
}