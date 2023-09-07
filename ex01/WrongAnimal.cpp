#include "WrongAnimal.hpp"

WrongAnimal& WrongAnimal::operator=(WrongAnimal& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << src.type << " got cloned" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal& src)
{
	*this = src;
}

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << this->type << " was created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " ran away" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "im an WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
