#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain(Brain& src);
	~Brain();

	Brain& operator=(Brain& src);
	std::string getIdea();
};

#endif
