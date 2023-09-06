#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	Dog(Dog& src);
	~Dog();

	void makeSound() const;
	std::string getType(void) const;

	Dog& operator=(Dog& src);
};


#endif
