#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap(),  name(name)
{
	this->setName(this->name + "_clap_name");
	std::cout << "(DiamondTrap name)Default constructor called : name is:" << this->name << std::endl;
}

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	this->name.assign("Diamond unknown");
	std::cout << "(DiamondTrap)Default constructor called : name is:" << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap) destructor called : name is: " << getName() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(), FragTrap(), ScavTrap() 
{
	*this = copy;
}

std::string DiamondTrap::getName(void) const
{
	return (this->name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref)
{
	setName(ref.getName());
	setHit(ref.getHit());
	setEnergy(ref.getEnergy());
	setAttack(ref.getAttack());
	this->name = ref.name;
	return (*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "Who Am I ?" << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
	std::cout << "DiamonTrap name: " << DiamondTrap::getName() << std::endl;
}
