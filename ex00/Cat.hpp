#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &cpy);
        ~Cat();
        void makeSound(void) const;
};

#endif