#include "Cat.hpp"

Cat& Cat::operator=(Cat& src)
{
	if (this->brain)
		delete this->brain;
	this->brain = src.brain;
	if (this != &src)
		this->type = src.type;
	std::cout << "Cat was cloned" << std::endl;
	return (*this);
}

Cat::Cat(Cat& src)
{
	*this = src;
}

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "the cutest Kitten was born" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat has one live less now" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": Give me food! nya~" << std::endl;
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void Cat::getIdea()
{
	std::cout << this->brain->getIdea() << std::endl;
}
