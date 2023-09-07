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
	virtual ~Animal() = 0;

	virtual void makeSound() const ;
	std::string getType(void) const;

	Animal& operator=(Animal& src);
	virtual void getIdea(void);
};

#endif
