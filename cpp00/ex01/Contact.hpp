#pragma once
#include "utils.h"

using namespace std;
# define OUT_OF_RANGE_ERROR -3
# define NOT_A_NUMBER -2
# define NEGATIVE_SIGNED -4

# define OUT_OF_RANGE_EMESSAGE "\nERROR : THIS NUMBER IS OUT OF RANGE\n"
# define NEGATIVE_SIGNED_EMESSAGE "\nERROR : - SIGN IS NOT VALID\n"
# define NOT_A_NUMBER_EMESSAGE "\nERROR : FORMAT ERROR\n"

class Contact
{
    private : 
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
    public :
        Contact(); 
        Contact(string first_name , string last_name , string nickname , string phonenumber , string darkest_secret);
        string get_first_name();
        string get_last_name();
        string get_nickname();
        string get_phone_number();
        string get_darkest_secret();
};
