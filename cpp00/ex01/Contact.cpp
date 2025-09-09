#include "utils.h"
using namespace std;

Contact::Contact() {}
Contact::Contact(string first_name, string last_name, string nickname, string phonenumber, string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phonenumber;
    this->darkest_secret = darkest_secret;
}
string Contact::get_first_name()
{
    return this->first_name;
}
string Contact::get_last_name()
{
    return this->last_name;
}
string Contact::get_nickname()
{
    return this->nickname;
}
string Contact::get_phone_number()
{
    return this->phone_number;
}
string Contact::get_darkest_secret()
{
    return this->darkest_secret;
}
