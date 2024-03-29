#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain" << ": constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain" << ": destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

Brain& Brain::operator=(const Brain& ref)
{
	int i;

	i = 0;
	while (i < 100)
	{
		setIdeas(i, ref.getIdeas(i));
		i++;
	}
	return (*this);
}

void Brain::setIdeas(int i, std::string temp)
{
	this->ideas[i] = temp;
}

std::string Brain::getIdeas(int i) const
{
	return (ideas[i]);
}

void Brain::showIdeas(void) const
{
	int i = 0;
	std::string temp;
	while (i < 100)
	{
		temp = getIdeas(i);
		if (!temp.empty())
			std::cout << "index : " << i << " " << temp << std::endl;
		i++;
	}
}

