#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\nDEEP COPY\n"  << std::endl;

	ICharacter* new_me = new Character();
	*(Character*)new_me = *(Character*)me;
	new_me->use(0, *bob);
	new_me->use(1, *bob);
	new_me->use(2, *bob); //should print northing
	delete bob; 
	delete me;
	delete src;
	delete new_me;

	return 0;
}

