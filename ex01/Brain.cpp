#include "Brain.hpp"

Brain& Brain::operator=(Brain& src)
{
	if (this != &src)
	{
		if (this->ideas)
			delete this->ideas;
		this->ideas = new std::string[100];
		for(int i = 0;i < 100;i++)
		{
			this->ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(Brain& src)
{
	*this = src;
}

Brain::Brain()
{
	this->ideas = new(std::string[100]);
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "...";
	}
}

Brain::~Brain()
{
	delete[] ideas;
}

std::string Brain::getIdea()
{
	return(this->ideas[1]);
}
