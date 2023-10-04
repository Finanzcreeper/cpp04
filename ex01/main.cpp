#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
Animal** shelter;
int c;
int size;
Animal *clone;

c = 0;
size = 20;
shelter = new Animal*[size];

while (c < size)
{
	if (c % 2 == 0)
		shelter[c] = new Cat();
	else
		shelter[c] = new Dog();
	shelter[c]->makeSound();
	std::cout << "lets take a look at whats going on is that cute little head of this " << shelter[c]->getType() << std::endl;
	shelter[c++]->getIdea();
	std::cout << "----------------------" << std::endl;
}
std::cout << "----------------------" << std::endl;
std::cout << "a " <<shelter[2]->getType() << " spontaneously cloned itself" << std::endl;
clone = new Cat();
*clone = *shelter[2];
clone->makeSound();
std::cout << "i have an idea nya~:" << std::endl;;
clone->getIdea();
std::cout << "----------------------" << std::endl;
for(int i = 0; i < size; i++)
{
	delete shelter[i];
	std::cout << "----------------------" << std::endl;
}
delete[] shelter;
std::cout << "this Peta shelter got closed down!" << std::endl;
std::cout << "but the cloned " << clone->getType() << " survived it all" << std::endl;
clone->makeSound();
std::cout << "i have an idea nya~:" << std::endl;;
clone->getIdea();
return (0);
}
