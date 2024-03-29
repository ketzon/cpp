#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void main2()
{
	Animal *origin[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			origin[i] = new Dog();
		else
			origin[i] = new Cat();
	}
	for (int i = 99; i >= 0; i--)
	{
		std::cout << i << std::endl;
		delete origin[i];
	}

	Dog	*origin_Dog = new Dog();
	Dog *copy_Dog = new Dog();

	origin_Dog->setBrainIdeas(1, "hmmm..");
	origin_Dog->setBrainIdeas(20, "yamm..");
	origin_Dog->showBrainIdeas();
	*copy_Dog = *origin_Dog;
	copy_Dog->showBrainIdeas();
	copy_Dog->setBrainIdeas(1, "aaaa");
	copy_Dog->setBrainIdeas(20,"asssdf");
	copy_Dog->showBrainIdeas();
	origin_Dog->showBrainIdeas();
	delete copy_Dog;
	delete origin_Dog;
}

int main() 
{
	main2();
	system("leaks a.out");
	return 0; 
}
