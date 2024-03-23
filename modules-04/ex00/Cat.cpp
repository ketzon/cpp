#include "Cat.hpp"

Cat::Cat() : Animal()
{
	Animal::setType("Cat");
	std::cout << this->type << ": constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << ": destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": Miaouuu!" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal()
{
	*this = copy;
}

Cat& Cat::operator=(const Cat& ref)
{
	type = ref.type;
	return (*this);
}
