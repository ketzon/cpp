#include "Character.hpp"

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character()
{
	_name.assign("default name");
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx % 4] = NULL;	
	return ;
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = copy;
}

Character& Character::operator=(const Character& ref)
{
	_name.assign(ref.getName());
	for (int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
		if(ref._inventory[i])
			_inventory[i] = ref._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

const std::string& Character::getName() const
{
	return _name;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx % 4])
	{
		std::cout << this->_name << ":";
		_inventory[idx % 4]->use(target);
	}
}
