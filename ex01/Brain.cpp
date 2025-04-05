
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    int cpt = -1;
    std::cout << "Brain Copy Constructor" << std::endl;
    while (++cpt < 100)
    {
        this->ideas[cpt] = cpy.ideas[cpt];
    }
}

Brain &Brain::operator=(const Brain &cpy)
{    
    std::cout <<"Brain Copy operator =.\n";
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