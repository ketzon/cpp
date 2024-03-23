#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	WrongAnimal::setType("WrongCat");
	std::cout << this->type << ": constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << ": destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Miaouuu!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	type = ref.type;
	return (*this);
}
