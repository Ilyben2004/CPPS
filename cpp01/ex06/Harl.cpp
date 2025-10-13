#include "Harl.hpp"

void Harl ::error(void)
{
    std ::cout << ERROR << std ::endl;
}

void Harl ::debug(void)
{
    std ::cout << DEBUG << std ::endl;
}

void Harl ::info(void)
{
    std ::cout << INFO << std ::endl;
}

void Harl ::warning(void)
{
    std ::cout << WARNING << std ::endl;
}

void Harl ::complain(std ::string level)
{
    std ::string levels[4] = {DEBUG_LEVEL, INFO_LEVEL, WARNING_LEVEL, ERROR_LEVEL};
    void (Harl::*prtFunction[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
            break;
        i++;
    }

    switch (i)
    {
    case 0:
        (this->*prtFunction[0])();
    case 1:
        (this->*prtFunction[1])();
    case 2:
        (this->*prtFunction[2])();
    case 3  :
        (this->*prtFunction[3])();
    default : 
        std :: cout << level << " is not a level" << std :: endl;
    }
}