#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// Animal	*generalAnimal = new Animal(); //abstract class made it so that it cannot be declared as an object, but can be used as a pointer or reference to an object of a derived class.
	Animal	*cat = new Cat();
	Animal	*dog = new Dog();

	// generalAnimal->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete dog;
	return (0);
}