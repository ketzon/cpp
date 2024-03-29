#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal" << ": constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal" << ": destructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal& Animal::operator=(const Animal& ref)
{
	type = ref.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << this->type << ": No sound!" << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType(void) const
{
	return (this->type);	
}

