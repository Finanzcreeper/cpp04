#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(Cat& src);
	~Cat();

	void makeSound() const;
	std::string getType(void) const;

	Cat& operator=(Cat& src);
};

#endif
