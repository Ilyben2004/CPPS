#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    const std::string name;
    unsigned short grade;

    class GradeTooHighException : public std::exception
    {
    private:
        std ::string message;

    public:
        GradeTooHighException(const std::string &message);
        const char *tooHigh() throw();
    };

    class GradeTooLowException : public std::exception
    {
    private:
        std ::string message;

    public:
        GradeTooLowException(const std::string &message);
        const char *tooLow() throw();
    };

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &bureaucrat);

    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    unsigned short getGrade() const;
    void setGrade(unsigned short grade);
    const std::string getName() const;

    ~Bureaucrat();
};