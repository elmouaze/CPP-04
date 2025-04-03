
#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}
Dog &Dog::operator=(const Dog &cpy)
{
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}
Dog::Dog(const Dog &cpy){
    *this = cpy;
}

Dog::~Dog(){
    std::cout << "Dog is Ddead" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Dog Bark" << std::endl;
}