#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(Dog& src);
	~Dog();

	void makeSound() const;
	std::string getType(void) const;

	Dog& operator=(Dog& src);
};


#endif
