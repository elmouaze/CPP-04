#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_name) {
    this->type = new_name;
    std::cout << "WrongAnimal Parameterized constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy){
    *this = cpy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is dead" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    std::cout << "WrongAnimal = operator." << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}


std::string WrongAnimal::getType(void) const{
    return (this->type);
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}
