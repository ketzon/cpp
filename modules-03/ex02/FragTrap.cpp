#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(FragTrap name) constructor called : name is: " << getName() << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "(FragTrap name) constructor called : name is: " << getName() << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::~FragTrap()
{
		std::cout << "(FragTrap) destructor called : name is: " << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
{
	setName(ref.getName());	
	setHit(ref.getHit());
	setEnergy(ref.getEnergy());
	setAttack(ref.getAttack());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: Gimme five! High five! Up top!\n" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << getName() << " : try attack..."<< std::endl;
	if (getHit() <= 0)
		std::cout << getName() << " is already dead!"<< std::endl;
	else if (getEnergy() <= 0)
		std::cout << getName() << ": energyPoints is zero!" << std::endl;
	else
	{
		std::cout << "FragTrap " << getName() <<  " attacks " << target<< ", causing "<< getAttack() <<" points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	displayStatus();
}
