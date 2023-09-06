#include "Animal.hpp"

Animal& Animal::operator=(Animal& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << src.type << " got cloned" << std::endl;
	return (*this);
}

Animal::Animal(Animal& src)
{
	*this = src;
}

Animal::Animal() : type("Animal")
{
	std::cout << this->type << " was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " ran away" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "im an animal" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
