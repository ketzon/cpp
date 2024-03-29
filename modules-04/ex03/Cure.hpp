#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure& copy);
		virtual AMateria* clone() const;
		Cure& operator=(const Cure& ref);
		void use(ICharacter& target);
};

