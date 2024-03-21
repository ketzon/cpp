#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "climits"

int main(void)
{
	ClapTrap a("Borderlands");
	ScavTrap b("Portal");

	a.attack("Wall-E");
	b.attack("Eve");
	a.takeDamage(5);
	b.takeDamage(110);
	a.beRepaired(2);
	b.beRepaired(20);
	b.guardGate();
	b.takeDamage(1);
	b.attack("Eve");
	return (0);
}
