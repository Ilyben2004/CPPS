#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>
#include <cstdio>
#include <limits>
#include <string>
#include <iomanip>
#include <sstream>

int string_isspace(string s);
void eof_detected();
string ft_scin(string text);
int ft_icin(string text);
std::string trim(std::string str);

#endif