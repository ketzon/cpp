#include "ClapTrap.hpp"
#include <iostream>
#include "climits"

ClapTrap::ClapTrap() : name("Unknown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called : name is:" << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "(name) constructor called : name is: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	this->name.assign(ref.name);
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) destructor called : name is: "<< name << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (name);
}

void ClapTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << name << " : try attack..."<< std::endl;
	if (hitPoints <= 0)
		std::cout << name << " is already dead!"<< std::endl;
	else if (energyPoints <= 0)
		std::cout << name << ": energyPoints is zero!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name <<  " attacks " << target<< ", causing "<< attackDamage <<" points of damage!" << std::endl;
		energyPoints--;
	}
	displayStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	displayStatus();
	if (hitPoints <= 0)
		std::cout << name << " is already dead! "<< std::endl;
	else if (hitPoints < amount)
	{
		std::cout << "ClapTrap " << name <<  " take " << amount <<" points of damage!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name <<  " take " << amount <<" points of damage!" << std::endl;
		hitPoints -= amount;
	}
	displayStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	displayStatus();
	std::cout << name << " : try Repair..."<< std::endl;
	if (hitPoints <= 0)
		std::cout << name << ": hitPoints is zero!" << std::endl;
	else if (energyPoints <= 0)
		std::cout << name << ": energyPoints is zero!" << std::endl;
	else
	{
		std::cout << name << ": success Repair" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	displayStatus();
}

void	ClapTrap::displayStatus(void)
{
	std::cout << "\n-------- status --------" << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << "attackDamage : " << attackDamage << std::endl;
	std::cout << "------ status end------\n" << std::endl;
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return (attackDamage);
}

void ClapTrap::setName(std::string name)
{
	name = name;
}

void ClapTrap::setHit(int amount)
{
	hitPoints = amount;
}

void ClapTrap::setEnergy(int amount)
{
	energyPoints = amount;
}

void ClapTrap::setAttack(int amount)
{
	attackDamage = amount;
}

int ClapTrap::getHit(void) const
{
	return (hitPoints);
}

int ClapTrap::getEnergy(void) const
{
	return (energyPoints);
}

int ClapTrap::getAttack(void) const
{
	return (attackDamage);
}
