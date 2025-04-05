#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{    
    private:
        Brain *brain;
    
    public:
        Dog();
        Dog(const Dog& cpy);
        Dog& operator=(const Dog& cpy);
        ~Dog();
        void makeSound(void) const;
};
#endif