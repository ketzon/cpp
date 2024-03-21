#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(ScavTrap name) constructor called : name is: " << getName() << std::endl;
	setHit(100);	
	setEnergy(50);	
	setAttack(20);	
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "(ScavTrap) default constructor called : name is: " << getName() << std::endl;
	setHit(100);	
	setEnergy(50);	
	setAttack(20);	
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref)
{
	setName(ref.getName());	
	setHit(ref.getHit());	
	setEnergy(ref.getEnergy());	
	setAttack(ref.getAttack());	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap) destructor called : name is: " << getName() << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "(ScavTrap) now in gate keeper mode...\n" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << getName() << " : try attack..."<< std::endl;
	if (getHit() <= 0)
		std::cout << getName() << " is already dead!"<< std::endl;
	else if (getEnergy() <= 0)
		std::cout << getName() << ": energyPoints is zero!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << getName() <<  " attacks " << target<< ", causing "<< getAttack() <<" points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	displayStatus();
}
