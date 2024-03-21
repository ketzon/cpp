#include "ClapTrap.hpp"
#include "climits"

int main(void)
{
	ClapTrap a("bob");
	ClapTrap b("bryan");
	a.attack("bryan");
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(10);
	a.takeDamage(1);
	a.takeDamage(1);
	a.attack("bryan");
	a.beRepaired(100);
	return (0);
}
