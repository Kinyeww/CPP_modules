#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *animals[2] = { new Dog(), new Cat() };
	animals[0]->makeSound();
	animals[1]->makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n===testing deep copy===\n" << '\n';
	Dog a;
	Dog b(a);
	Dog c;
	c = a;
	c = c;

	Cat x;
	Cat y(x);
	Cat z;
	z = x;
	delete j;//should not create a leak (constructor call new for brain and destructor call delete for brain)
	delete i;
	delete animals[0];
	delete animals[1];
	return (0);
}