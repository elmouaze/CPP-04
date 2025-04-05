#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &cpy);
        WrongCat &operator=(const WrongCat &cpy);
        ~WrongCat();
        void makeSound(void) const;
};
#endif