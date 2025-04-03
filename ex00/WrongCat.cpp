
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat  Default Constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy){
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
    std::cout << "WrongCat = operator." << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCatl is dead" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound" << std::endl;
}