#include "Dog.hpp"

Dog::Dog() : Animal()
{
	Animal::setType("Dog");
	std::cout << this->type << ": constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << ": destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof!" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal()
{
	*this = copy;
}

Dog& Dog::operator=(const Dog& ref)
{
	type = ref.type;
	return (*this);
}
