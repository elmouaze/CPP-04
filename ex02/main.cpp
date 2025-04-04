#include "Animal.hpp"
#include"Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>


int main()
{
    const       int size = 2;
    Animal*     animals[size];
    int         index = -1;
        while (++index < size/2)
            animals[index] = new Dog();

        while (index < size)
            animals[index++] = new Cat();
        
        while(--index >= 0)
            animals[index]->makeSound();

        while(++index < size) 
            delete animals[index];
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    Dog origin;
    Dog copy = origin;
    return 0;
}