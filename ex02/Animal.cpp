#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor"<< std::endl;
}
Animal::Animal(std::string new_type){
    std::cout <<"Animal Parameterized constructor.\n";
    this->type = new_type;
}

Animal::Animal (const Animal& cpy)
{
    std::cout <<"Animal copy constructor.\n";
    this->type = cpy.type;
}


Animal &Animal::operator=(const Animal &cpy)
{
    std::cout <<"Animal Copy operator =.\n";
    if (this != &cpy)
        this->type = cpy.type;
    return (*this);
}
Animal::~Animal(){
    std::cout << "Animal is dead." << std::endl;
}

std::string Animal::getType(void) const{
    return (this->type);
}
