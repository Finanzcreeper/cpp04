#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& src);
	~WrongAnimal();

	void makeSound() const ;
	std::string getType(void) const;

	WrongAnimal& operator=(WrongAnimal& src);
};

#endif
