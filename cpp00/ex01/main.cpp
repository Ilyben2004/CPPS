#include "utils.h"
int main()
{
    int i = 1;
    PhoneBook phonebook = PhoneBook();
    while (1)
    {
        string option;
        option = ft_scin("what do u want to Do (ADD , SEARCH , EXIT) : ");
        if (cin.eof())
            return (EXIT_FAILURE);
        if (option.compare("ADD") == 0)
        {
            if (phonebook.add() == 0)
                return (EXIT_FAILURE);
        }
        else if (option.compare("SEARCH") == 0)
        {
            if (phonebook.search() == 0)
                return (EXIT_FAILURE);
        }
        else if (option.compare("EXIT") == 0)
            return(EXIT_SUCCESS);
        i++;
    }
}