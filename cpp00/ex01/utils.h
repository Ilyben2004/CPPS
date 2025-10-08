#ifndef UTILS_H
#define UTILS_H
# include <iostream>
# include <cstdlib>
# include <string>
# include <iomanip>
# define OUT_OF_RANGE_ERROR -3
# define NOT_A_NUMBER -2
# define NEGATIVE_SIGNED -4
# define OUT_OF_RANGE_EMESSAGE "\nERROR : THIS NUMBER IS OUT OF RANGE\n"
# define NEGATIVE_SIGNED_EMESSAGE "\nERROR : - SIGN IS NOT VALID\n"
# define NOT_A_NUMBER_EMESSAGE "\nERROR : FORMAT ERROR\n"
# define SEARCH_HEADER_MESSAGE "index     |first name|last name |nickname  |"

int string_isspace(std ::string s);
std ::string ft_scin(std ::string text);
int ft_icin(std ::string text);
std::string trim(std::string str);
void number_error_message(int option);

#endif