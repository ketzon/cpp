#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	virtual	~Dog();
	virtual void makeSound() const;
	Dog(const Dog& copy);
	Dog& operator=(const Dog& ref);
	std::string getType(void);
	void setType(std::string type);

	protected:
};

#endif
