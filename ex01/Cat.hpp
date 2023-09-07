#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(Cat& src);
	~Cat();

	void makeSound() const;
	std::string getType(void) const;

	Cat& operator=(Cat& src);
	void getIdea(void);
};

#endif
