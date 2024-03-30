#include "MateriaSource.hpp" 

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
			delete _materia[i];
		if (ref._materia[i])
			_materia[i] = ref._materia[i]->clone();
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return NULL;
}
