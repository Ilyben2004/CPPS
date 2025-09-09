#include "utils.h"

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
    if ((!getline(std ::cin, input))){
        return("");
    }
    if (string_isspace(input))
        return (ft_scin(text));
    input = trim(input);
    return (input);
}
int ft_icin(string text)
{
    int input;
    string sinput;
    sinput = ft_scin (text);
    if (sinput.empty())
        return (-1);
    std::istringstream(sinput) >> input;
    return (input);
}
