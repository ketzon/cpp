#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class Animal
{
	public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& ref);
	virtual void makeSound() const;
	void setType(std::string type);
	std::string getType(void) const;

	protected:
	std::string type;
};

#endif
