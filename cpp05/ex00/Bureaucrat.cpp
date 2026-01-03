#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() { std::cout << "Bureaucrat Default Constructor" << std::endl; }
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Bureaucrat Copy Constructor" << std::endl;
    *this = bureaucrat;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
        this->grade = bureaucrat.getGrade();
}

unsigned short Bureaucrat::getGrade() const
{
    return (this->grade);
}
void Bureaucrat::setGrade(unsigned short grade)
{
    
}