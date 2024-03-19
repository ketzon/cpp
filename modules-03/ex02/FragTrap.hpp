#ifndef FragTrap_hpp
#define FragTrap_hpp

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:

	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &ref);
	void attack(const std::string& target);
	void highFivesGuys(void);

	private:
};

#endif
