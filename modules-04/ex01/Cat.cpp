#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	Animal::setType("Cat");
	brain = new Brain();
	std::cout << this->type << ": constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
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
	this->type = ref.getType();
	if (this->brain)
		delete brain;
	brain = new Brain(*ref.brain);
	return (*this);
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

void Cat::setBrainIdeas(int i, std::string idea)
{
	brain->setIdeas(i, idea);
}

void Cat::showBrainIdeas() const
{
	brain->showIdeas();	
}
