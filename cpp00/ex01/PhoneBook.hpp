#pragma once
#include "utils.h"
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact Contact_array[8];
    static int size;

    void replace_oldest_with_newest(Contact new_contact);
    int display_string_truncated(std :: string s);
    void display_one_contact_truncated(Contact contact, int index);
    void display_one_contact_full(Contact contact, int index);
    void display_one_cotact(Contact contact, int index, int truncated);
    void display_header();
    void print_key_value(std :: string key , std :: string value);
    void one_field_per_line(Contact contact , int index);

public:
    PhoneBook();
    int add();
    int search();
};