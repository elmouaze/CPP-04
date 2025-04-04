#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &cpy);
        ~Cat();
        void makeSound(void) const;
};

#endif