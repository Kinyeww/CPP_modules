#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	animals[0]->makeSound();
	animals[2]->makeSound();
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

	int num = 4;
	while (--num >= 0)
		delete animals[num];
	return (0);
}