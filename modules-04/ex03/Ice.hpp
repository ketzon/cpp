# pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& copy);
		virtual AMateria* clone() const;
		Ice& operator=(const Ice& ref);
		void use(ICharacter& target);
};

