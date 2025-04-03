#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";

}
Cat &Cat::operator=(const Cat &cpy)
{    
    std::cout << "Cat = operator." << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Cat::Cat(const Cat &cpy){
    *this = cpy;
}
Cat::~Cat(){
    std::cout << "Cat is Dead" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Cat Meow" << std::endl;
}
