#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain(ERROR_LEVEL);
    harl.complain(DEBUG_LEVEL);
    harl.complain(INFO_LEVEL);
    harl.complain(WARNING_LEVEL);
}