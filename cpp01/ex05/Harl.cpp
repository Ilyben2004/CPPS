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
    void (Harl ::*prtFunction)(void);
    if (level.compare(DEBUG_LEVEL) == 0)
        prtFunction = &Harl :: debug;
    else if (level.compare(INFO_LEVEL) == 0)
        prtFunction = &Harl :: info;
    else if (level.compare(ERROR_LEVEL) == 0)
        prtFunction = &Harl :: error;
    else
        prtFunction = &Harl :: warning;
    (this->*prtFunction) ();
}