#include "utils.h"

int PhoneBook::size = 0;

void PhoneBook ::print_key_value(string key, string value)
{
    cout << setw(15) << left   << key;
    cout << " : " << value << endl;
}
void PhoneBook::one_field_per_line(Contact contact, int index)
{
    cout << setw(15) << left << "INDEX";
    cout << " : ";
    cout << index << endl;
    print_key_value("FIRST NAME", contact.get_first_name());
    print_key_value("LAST NAME", contact.get_last_name());
    print_key_value("NICKNAME", contact.get_nickname());
    print_key_value("PHONE NUMBER", contact.get_phone_number());
    print_key_value("DARKEST SECRET", contact.get_darkest_secret());
}

void PhoneBook::replace_oldest_with_newest(Contact new_contact)
{
    int index = 0;
    while (index != 7)
    {
        Contact_array[index] = Contact_array[index + 1];
        index++;
    }
    Contact_array[index] = new_contact;
}

int PhoneBook::display_string_truncated(string s)
{
    int i;

    i = 0;
    if (s.length() > 10)
    {
        while (i < 9)
            cout << s[i++];
        cout << ".";
        return (10);
    }
    cout << setw(10) 
     << s;
    return (s.length());
}
void PhoneBook::display_one_contact_truncated(Contact contact, int index)
{
    cout << setw(10) << index;
    cout << "|";
    display_string_truncated(contact.get_first_name());
    cout << "|";
    display_string_truncated(contact.get_last_name());
    cout << "|";
    display_string_truncated(contact.get_nickname());
    cout << "\n";
}
void PhoneBook::display_one_contact_full(Contact contact, int index)
{
    cout << index;
    cout << "|";
    cout << contact.get_first_name();
    cout << " | ";
    cout << contact.get_last_name();
    cout << " | ";
    cout << contact.get_nickname();
    cout << "\n";
}
void PhoneBook::display_one_cotact(Contact contact, int index, int truncated)
{
    if (truncated == 1)
        display_one_contact_truncated(contact, index);
    else
        display_one_contact_full(contact, index);
}

void PhoneBook ::display_header()
{
    cout << SEARCH_HEADER_MESSAGE << endl;
}
PhoneBook::PhoneBook() {}
int PhoneBook::add()
{
    string inputs[5];
    inputs[0] = ft_scin("Please enter the first name of this new contact : ");
    if (cin.eof())
        return (0);
    inputs[1] = ft_scin("Please enter the last name of this new contact : ");
    if (cin.eof())
        return (0);
    inputs[2] = ft_scin("Please enter the nickname of this new contact : ");
    if (cin.eof())
        return (0);
    inputs[3] = ft_scin("Please enter the phone_number of this new contact : ");
    if (cin.eof())
        return (0);
    inputs[4] = ft_scin("Please enter the darkest_secret of this new contact : ");
    if (cin.eof())
        return (0);
    Contact new_contact = Contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
    if (PhoneBook::size != 8)
    {
        Contact_array[PhoneBook::size] = new_contact;
        PhoneBook::size = (PhoneBook::size) + 1;
    }
    else
        replace_oldest_with_newest(new_contact);
    return (1);
}
int PhoneBook::search()
{
    int option;
    int index = 0;

    if (PhoneBook ::size == 0)
    {
        cout << "YOU HAVE 0 CONTACTS" << endl;
        return (-1);
    }
    display_header();
    while (index < PhoneBook::size)
    {
        display_one_cotact(Contact_array[index], index, 1);
        index++;
    }
    option = ft_icin("Please select an index of contact u want to display : ");
    if (option < 0)
    {
        number_error_message(option);
        return (1);
    }
    if (cin.eof())
        return (0);
    if (option < 0 || option >= PhoneBook::size)
        cout << "\nERROR : OUT OF RANGE\n";
    else
    {
        display_header();
        one_field_per_line(Contact_array[option], option);
    }
    return (1);
}
