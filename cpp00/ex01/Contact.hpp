#pragma once
#include "utils.h"

using namespace std;

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
