#include "utils.h"

bool is_number(string number)
{
    int i;

    i = 0;
    while (number[i])
    {
        if (isdigit(number[i]) == false)
            return (false);
        i++;
    }
    return (true);
}
int string_isspace(string s)
{
    int i = 0;
    while (s[i])
    {
        if (isspace(s[i]))
            i++;
        else
            return (0);
    }
    return (1);
}
void eof_detected()
{
    cout << endl;
    cout << "BYE BYE";
    std::exit(EXIT_FAILURE);
}

std::string trim(std::string str)
{
    if (str.length() == 0)
        return str;

    int beg = 0;
    int end = str.length() - 1;
    while (isspace(str[beg]))
        beg++;
    while (isspace(str[end]))
        end--;

    return str.substr(beg, end - beg + 1);
}

string ft_scin(string text)
{
    string input;
    cout << text;
    if ((!getline(std ::cin, input)))
    {
        return ("");
    }
    if (string_isspace(input))
        return (ft_scin(text));
    input = trim(input);
    return (input);
}

void number_error_message(int option)
{
    if (option == OUT_OF_RANGE_ERROR)
        cout << OUT_OF_RANGE_EMESSAGE;
    else if (option == NEGATIVE_SIGNED)
        cout << NEGATIVE_SIGNED_EMESSAGE;
    else
        cout << NOT_A_NUMBER_EMESSAGE;
}
int ft_icin(string text)
{
    int input;
    int i;

    i = 0;
    input = 0;
    string sinput;
    sinput = ft_scin(text);
    if (sinput.empty())
        return (-1);
    if (sinput.at(0) == '+')
        sinput.substr(1);
    if (sinput.at(0) == '-')
        return (NEGATIVE_SIGNED);
    if (sinput.empty())
        return (NOT_A_NUMBER);
    if (is_number(sinput) == false)
        return (NOT_A_NUMBER);  
    while ((sinput.empty() == false) &&  (sinput.length() > 1) && (sinput.at(0) == '0'))
        sinput.substr(1);
    if (sinput.length() > 1)
        return (OUT_OF_RANGE_ERROR);
    input = (int)sinput.at(0) - 48;
    if ((input < 0) || (input > 7))
        return (OUT_OF_RANGE_ERROR);
    return (input);
}
