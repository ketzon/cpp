#include "Ice.hpp"

Ice::~Ice()
{

}

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& copy) : AMateria("ice")
{
	*this = copy;
}

Ice& Ice::operator=(const Ice& ref)
{
	_type.assign(ref.getType());	
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
