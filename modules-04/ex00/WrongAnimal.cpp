#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << this->type << ": constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << ": destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	type = ref.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->type << ": (wrong) No sound!" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);	
}

