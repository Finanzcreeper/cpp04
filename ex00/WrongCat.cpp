#include "WrongCat.hpp"

WrongCat& WrongCat::operator=(WrongCat& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << "WrongCat was cloned" << std::endl;
	return (*this);
}

WrongCat::WrongCat(WrongCat& src)
{
	*this = src;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "the cutest WrongKitten was born" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has one live less now" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Give me food! nya~" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}
