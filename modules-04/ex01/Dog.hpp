#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	virtual	~Dog();
	virtual void makeSound() const;
	Dog(const Dog& copy);
	Dog& operator=(const Dog& ref);
	Brain* getBrain() const;
	void setBrainIdeas(int i, std::string idea);
	void showBrainIdeas() const;

	private:
	Brain *brain;
};

#endif
