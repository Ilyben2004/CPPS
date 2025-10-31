#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete i;
        delete j;
        delete meta;
    }
    std ::cout << "\n\n";
    std ::cout << "----------------------------------------------------\n"
               << std ::endl;
    {
        Cat cat;
        Dog dog;
        Animal &animal_first = cat;
        Animal &animal_second = dog;
        Animal a = cat;
        a.makeSound();
        std::cout << animal_first.getType() << " " << std::endl;
        std::cout << animal_second.getType() << " " << std::endl;
        animal_first.makeSound();
        animal_second.makeSound();
    }
    std ::cout << "\n\n";
    std ::cout << "----------------------------------------------------\n"
               << std ::endl;
    {
        Cat cat;
        Dog dog;
        Animal animal_first = cat;
        Animal animal_second = dog;
        Animal a = cat;
        a.makeSound();
        std::cout << animal_first.getType() << " " << std::endl;
        std::cout << animal_second.getType() << " " << std::endl;
        animal_first.makeSound();
        animal_second.makeSound();
    }
}