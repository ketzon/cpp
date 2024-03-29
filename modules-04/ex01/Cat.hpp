#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	Cat();
	virtual	~Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& ref);
	virtual void makeSound() const;
	Brain* getBrain() const;
	void setBrainIdeas(int i, std::string idea);
	void showBrainIdeas() const;

	private:

	Brain *brain;
};

#endif
