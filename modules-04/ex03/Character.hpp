#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		virtual ~Character();
		Character(const Character& copy);
		Character& operator=(const Character& ref);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


	private:
		std::string _name;
		AMateria *_inventory[4];
};
