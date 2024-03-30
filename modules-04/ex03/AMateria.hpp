#pragma once

#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

class ICharacter;

class AMateria
{
	public:
		virtual ~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& ref);
		AMateria(std::string const & type);
		std::string const & getType() const; //Return the materia type
		void setType(const std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};

