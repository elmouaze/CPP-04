
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    int cpt = -1;

    while (++cpt < 100)
    {
        this->ideas[cpt] = cpy.ideas[cpt];
    }
    std::cout << "Brain Copy construstor" << std::endl;
}

Brain &Brain::operator=(const Brain &cpy)
{    
    if (this != &cpy)
    {
        int cpt = -1;

        while (++cpt < 100)
        {
            this->ideas[cpt] = cpy.ideas[cpt];
        }    
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is destructed" << std::endl;
}