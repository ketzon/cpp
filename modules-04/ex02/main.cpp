#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void main2()
{
	/* Animal animal; */ //abstract class
	Cat cat;
	Dog dog;

	/* animal.makeSound(); */
	cat.makeSound();
	dog.makeSound();
}

int main() 
{
	main2();
	system("leaks a.out");
	return 0; 
}
