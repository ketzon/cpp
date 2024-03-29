#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &ref);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*_materia[4];
};
