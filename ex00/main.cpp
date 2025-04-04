#include "Animal.hpp"
#include"Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wr = new WrongCat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << std::endl;
        i->makeSound(); //cat sound
        j->makeSound();
        meta->makeSound();
        wr->makeSound();
    Dog tst = *(Dog *)j;
        std::cout << "-------------------" << std::endl;
        std::cout << tst.getType() << " " << std::endl;
        tst.makeSound();
        std::cout << "--------------------" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete wr;
    return 0;
}