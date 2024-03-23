#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
	public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& ref);
	void makeSound() const;
	void setType(std::string type);
	std::string getType(void) const;

	protected:
	std::string type;
};

#endif
