#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>
#include <stdint.h>

class ClapTrap
{
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &ref);
	~ClapTrap();

	unsigned int getAttackDamage(void);
	std::string getName(void) const;
	int getHit() const;
	int getEnergy() const;
	int getAttack() const;
	void setName(std::string name);
	void setHit(int amount);
	void setEnergy(int amount);
	void setAttack(int amount);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayStatus();
};

#endif
