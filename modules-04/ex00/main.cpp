#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void main2()
{
	std::cout << "Test with virtual\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	std::cout << "\nTest without virtual\n" << std::endl;

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat();
	std::cout << WrongMeta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	WrongMeta->makeSound();
	k->makeSound();
	l->makeSound();
	delete k;
	delete l;
	delete WrongMeta;
}


int main()
{
	main2();
	system("leaks ./a.out");
	return (0);
}
