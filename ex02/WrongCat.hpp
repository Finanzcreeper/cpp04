#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat();
	WrongCat(WrongCat& src);
	~WrongCat();

	void makeSound() const;
	std::string getType(void) const;

	WrongCat& operator=(WrongCat& src);
};

#endif
