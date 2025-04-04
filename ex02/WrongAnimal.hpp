#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cpy);
        WrongAnimal &operator=(const WrongAnimal &cpy);
        ~WrongAnimal();

        WrongAnimal(std::string new_name);
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif
