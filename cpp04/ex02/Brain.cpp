#include "Brain.hpp"

//-----------------------------------CONSTRUCTOSRS--------------------------------//

Brain ::Brain()
{
    std ::cout << "Default Constructor Caleed Brain" << std ::endl;
}

Brain ::Brain(const Brain &brain)
{
    std ::cout << "Copy Constructor Caleed Brain" << std ::endl;
    *this = brain;
}

//----------------------------------- Copy Assigment Operator --------------------------------//

Brain &Brain ::operator=(const Brain &brain)
{
    if (this != &brain)
    {
        int i = 0;
        while ((brain.getIdea(++i).empty() == false) && (i < IDEAS_SIZE))
        {
            this->setIdea(brain.getIdea(i), i);
            i++;
        }
    }
    return (*this);
}

//----------------------------------- Methods  -----------------------------------//

void Brain ::setIdea(std ::string idea, int index)
{
    this->ideas[index] = idea;
}

std ::string Brain::getIdea(int index) const
{
    return (ideas[index]);
}


//----------------------------------- Destructor -----------------------------------//

Brain ::~Brain()
{
    std ::cout << "Default Destructor Called Brain" << std ::endl;
}