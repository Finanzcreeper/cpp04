#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal& src);
	~Animal();

	virtual void makeSound() const ;
	std::string getType(void) const;

	Animal& operator=(Animal& src);
};

#endif
