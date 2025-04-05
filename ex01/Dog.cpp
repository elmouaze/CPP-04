
#include "Dog.hpp"

Dog::Dog():Animal(), brain(new Brain()){
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}
Dog &Dog::operator=(const Dog &cpy)
{
    std::cout << "Dog Copy operator =." << std::endl;
    if (this != &cpy)
    {
        this->type = cpy.type;
        delete brain;
        this->brain = new Brain(*cpy.brain);
    }
    return (*this);
}
Dog::Dog(const Dog &cpy):Animal(cpy) , brain(new Brain(*cpy.brain)) {
    std::cout << "Dog Copy Constructor." << std::endl;
    this->type = cpy.type;
}

Dog::~Dog(){
    std::cout << "Dog is Dead" << std::endl;
    delete brain;
}

void    Dog::makeSound() const{
    std::cout << "Dog Bark" << std::endl;
}