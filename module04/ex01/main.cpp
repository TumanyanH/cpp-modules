#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* animals[100];
    int i = 0;

    while (i < 100)
    {
        if (i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        ++i;
    }

    i = 0;
    while (i < 100)
    {
        animals[i]->makeSound();
        delete animals[i];
        ++i;
    }
    return 0;
}