#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	virtual	~Cat();
	void setType(std::string type);
	std::string getType(void);
	Cat(const Cat& copy);
	Cat& operator=(const Cat& ref);
	virtual void makeSound() const;

	protected:
};

#endif
