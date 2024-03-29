#include "Cure.hpp"

Cure::~Cure()
{

}

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& copy) : AMateria("cure")
{
	*this = copy;
}

Cure& Cure::operator=(const Cure& ref)
{
	_type.assign(ref.getType());	
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
