#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	Animal::setType("Dog");
	brain = new Brain();
	std::cout << this->type << ": constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << this->type << ": destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof!" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(), brain(NULL)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog& ref)
{
	this->type = ref.getType();
	if (this->brain)
		delete brain;
	brain = new Brain(*ref.brain);
	return (*this);
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}

void Dog::setBrainIdeas(int i, std::string idea)
{
	brain->setIdeas(i, idea);
}

void Dog::showBrainIdeas() const
{
	brain->showIdeas();
}
