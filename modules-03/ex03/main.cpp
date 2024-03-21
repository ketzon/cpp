#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("florian");

	std::cout << a.ClapTrap::getName() << std::endl;
	std::cout << a.DiamondTrap::getName() << std::endl;
	std::cout << a.FragTrap::getHit() << std::endl;
	std::cout << a.ScavTrap::getEnergy() << std::endl;
	std::cout << a.FragTrap::getAttack() << std::endl;
	a.whoAmI();
	a.attack("bob");
	return (0);
}
