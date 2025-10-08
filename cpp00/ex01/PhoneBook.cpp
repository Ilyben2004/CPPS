#include "PhoneBook.hpp"

int PhoneBook::size = 0;

void PhoneBook ::print_key_value(std ::string key, std ::string value)
{
    std ::cout << std ::setw(15) << std ::left << key;
    std ::cout << " : " << value << std ::endl;
}
void PhoneBook::one_field_per_line(Contact contact, int index)
{
    std ::cout << std ::setw(15) << std ::left << "INDEX";
    std ::cout << " : ";
    std ::cout << index << std ::endl;
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

int PhoneBook::display_string_truncated(std ::string s)
{
    int i;

    i = 0;
    if (s.length() > 10)
    {
        while (i < 9)
            std ::cout << s[i++];
        std ::cout << ".";
        return (10);
    }
    std ::cout << std ::setw(10)
               << s;
    return (s.length());
}
void PhoneBook::display_one_contact_truncated(Contact contact, int index)
{
    std ::cout << std ::setw(10) << std ::right << index;
    std ::cout << "|";
    display_string_truncated(contact.get_first_name());
    std ::cout << "|";
    display_string_truncated(contact.get_last_name());
    std ::cout << "|";
    display_string_truncated(contact.get_nickname());
    std ::cout << "|" << std ::endl;
}
void PhoneBook::display_one_contact_full(Contact contact, int index)
{
    std ::cout << index;
    std ::cout << "|";
    std ::cout << contact.get_first_name();
    std ::cout << " | ";
    std ::cout << contact.get_last_name();
    std ::cout << " | ";
    std ::cout << contact.get_nickname();
    std ::cout << "|" << std ::endl;
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
    std ::cout << std ::endl;
    std ::cout << SEARCH_HEADER_MESSAGE << std ::endl;
}
PhoneBook::PhoneBook() {}
int PhoneBook::add()
{
    std ::string inputs[5];
    inputs[0] = ft_scin("Please enter the first name of this new contact : ");
    if (std ::cin.eof())
        return (0);
    inputs[1] = ft_scin("Please enter the last name of this new contact : ");
    if (std ::cin.eof())
        return (0);
    inputs[2] = ft_scin("Please enter the nickname of this new contact : ");
    if (std ::cin.eof())
        return (0);
    inputs[3] = ft_scin("Please enter the phone_number of this new contact : ");
    if (std ::cin.eof())
        return (0);
    inputs[4] = ft_scin("Please enter the darkest_secret of this new contact : ");
    if (std ::cin.eof())
        return (0);
    if (PhoneBook::size != 8)
    {
        Contact_array[PhoneBook::size].set_first_name(inputs[0]);
        Contact_array[PhoneBook::size].set_last_name(inputs[1]);
        Contact_array[PhoneBook::size].set_nickname(inputs[2]);
        Contact_array[PhoneBook::size].set_phone_number(inputs[3]);
        Contact_array[PhoneBook::size].set_darkest_secret(inputs[4]);
        PhoneBook::size = (PhoneBook::size) + 1;
    }
    else
    {
        Contact new_contact = Contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
        replace_oldest_with_newest(new_contact);
    };
    return (1);
}
int PhoneBook::search()
{
    int option;
    int index = 0;

    if (PhoneBook ::size == 0)
    {
        std ::cout << "YOU HAVE 0 CONTACTS" << std ::endl;
        return (-1);
    }
    display_header();
    while (index < PhoneBook::size)
    {
        display_one_cotact(Contact_array[index], index, 1);
        index++;
    }
    std ::cout << std ::endl;
    option = ft_icin("Please select an index of contact u want to display : ");
    if (option < 0)
    {
        number_error_message(option);
        return (1);
    }
    if (std ::cin.eof())
        return (0);
    if (option < 0 || option >= PhoneBook::size)
        std ::cout << "ERROR : OUT OF RANGE" << std ::endl;
    else
    {
        display_header();
        one_field_per_line(Contact_array[option], option);
        std ::cout << std ::endl;
    }
    return (1);
}
