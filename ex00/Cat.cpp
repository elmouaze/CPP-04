#include "Cat.hpp"

Cat::Cat() :Animal()
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";

}
Cat &Cat::operator=(const Cat &cpy) 
{    
    std::cout << "Cat copy operator = ." << std::endl;
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}

Cat::Cat(const Cat &cpy) :Animal(cpy){
    std::cout << "Cat Copy Constructor" << std::endl;
    this->type = cpy.type;
}
Cat::~Cat(){
    std::cout << "Cat is Dead" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Cat Meow" << std::endl;
}
