#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal& cpy);
        Animal &operator=(const Animal &cpy);
        
        virtual ~Animal();
        virtual void makeSound(void) const;
        std::string getType(void) const;
};
#endif