#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
meta->makeSound();
std::cout << "-------------------" << std::endl;
const Animal* j = new Dog();
j->makeSound();
std::cout << "-------------------" << std::endl;
const Animal* i = new Cat();
i->makeSound();
std::cout << "-------------------" << std::endl;
const WrongAnimal* k = new WrongCat();
k->makeSound();
std::cout << "-------------------" << std::endl;
return (0);
}
