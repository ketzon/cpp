#ifndef ScavTrap_hpp
#define ScavTrap_hpp
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &ref);
	void guardGate(void);
	void attack(const std::string& target);

	private:
};

#endif
