#include "Dog.hpp"

Dog& Dog::operator=(Dog& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << "Dog was cloned" << std::endl;
	return (*this);
}

Dog::Dog(Dog& src)
{
	*this = src;
}

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog was born" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog died" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": Lets go for a walk! woof~" << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->type);
}
