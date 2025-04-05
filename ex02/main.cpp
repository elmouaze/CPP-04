#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    // Example 1: Demonstrating proper destruction order
    // When deleting through Animal pointer, the correct destructors are called in order:
    // 1. Dog/Cat destructor
    // 2. Brain destructor
    // 3. Animal destructor
    {
        Animal* testAnimal = new Dog();
        delete testAnimal;  // Will call: ~Dog() -> ~Brain() -> ~Animal()
    }

    // Animal* abstractAnimal = new Animal(); 
     // Error: cannot instantiate abstract class

    // Create array of Animal objects (half Dog, half Cat)
    const int size = 4;
    Animal* animals[size];
    
    // Fill first half with Dogs
    for (int i = 0; i < size/2; i++)
        animals[i] = new Dog();
    
    // Fill second half with Cats
    for (int i = size/2; i < size; i++)
        animals[i] = new Cat();
    
    // Test each animal
    for (int i = 0; i < size; i++) {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    
    // Delete all animals (proper destruction order)
    for (int i = 0; i < size; i++)
        delete animals[i];
    
    return 0;
}