
#include "Dog.hpp"

Dog::Dog():Animal(), brain(new Brain()){
    std::cout << "Dog Default Constructor" << std::endl;
    this->type = "Dog";
}
Dog &Dog::operator=(const Dog &cpy)
{
    if (this != &cpy)
    {
        this->type = cpy.type;
        delete brain;
        this->brain = new Brain(*cpy.brain);
    }
    return (*this);
}
Dog::Dog(const Dog &cpy):Animal(cpy) , brain(new Brain(*cpy.brain)) {
    this->type = cpy.type;
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog is Dead" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Dog Bark" << std::endl;
}