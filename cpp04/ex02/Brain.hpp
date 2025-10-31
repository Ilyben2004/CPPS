#pragma once
#include <string>
#include <iostream>
#define IDEAS_SIZE 100

class Brain
{
private:
    std ::string ideas[IDEAS_SIZE];

public:
    Brain();
    Brain (const Brain & brain);

    Brain & operator=(const Brain & brain);
    void setIdea(std ::string idea, int index);
    std ::string getIdea(int index) const;  
    ~Brain();
};