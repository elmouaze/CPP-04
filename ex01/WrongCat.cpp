
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat  Default Constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy){
    std::cout << "WrongCat  Copy Constructor." << std::endl;
    this->type = cpy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
    std::cout << "WrongAnimal Copy operator =." << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat is dead" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound" << std::endl;
}