#include "utils.h"
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    int i = 1;
    PhoneBook phonebook = PhoneBook();
    while (1)
    {
        std ::string option;
        option = ft_scin("what do u want to Do (ADD , SEARCH , EXIT) : ");
            if (std ::cin.eof())
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
            return (EXIT_SUCCESS);
        i++;
    }
}