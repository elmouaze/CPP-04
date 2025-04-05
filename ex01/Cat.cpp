#include "Cat.hpp"

Cat::Cat() :Animal() , brain(new Brain())
{
    std::cout << "Cat Default Constructor" << std::endl;
    this->type = "Cat";

}
Cat &Cat::operator=(const Cat &cpy) 
{    
    std::cout << "Cat Copy operator =." << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
        delete brain;
        this->brain = new Brain(*cpy.brain);
    }
    return (*this);
}

Cat::Cat(const Cat &cpy) :Animal(cpy) , brain(new Brain(*cpy.brain)) {

    std::cout << "Cat Copy Constructor." << std::endl;
    this->type = cpy.type;
}
Cat::~Cat(){
    delete brain;
    std::cout << "Cat is Dead" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Cat Meow" << std::endl;
}
