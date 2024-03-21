#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"



class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
	~DiamondTrap();
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap& ref);
	std::string getName(void) const;
	void whoAmI(void) const;

	private:

	std::string name;

};

#endif
