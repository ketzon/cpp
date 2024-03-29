#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :  _type(type)
{
	
}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
	_type = ref.getType();	
	return *this;
}

void AMateria::setType(const std::string type)
{
	_type.assign(type);
}

std::string const& AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "i don't know how to use a \"" + _type + "\" on " + target.getName() + " !"<< std::endl;
}
