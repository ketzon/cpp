#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("WALL-E");
	ScavTrap b("R2D2");
	FragTrap c("BENDER");

	a.attack("BENDER");
	c.takeDamage(0);
	b.attack("WALL-E");
	a.takeDamage(20);
	c.attack("WALL-E");
	a.takeDamage(30);
	a.beRepaired(10);
	b.beRepaired(10);
	c.beRepaired(10);
	b.guardGate();
	c.highFivesGuys();
	return (0);
}
