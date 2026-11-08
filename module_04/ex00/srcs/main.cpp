#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*ptrAnimal = new Animal();
	Animal	*ptrCat = new Cat();
	Animal	*ptrDog = new Dog();

	std::cout << "Animal type: " << ptrAnimal->getType() << '\n';	
	std::cout << "Animal type: " << ptrCat->getType() << '\n';
	std::cout << "Animal type: " << ptrDog->getType() << '\n';	
	ptrAnimal->makeSound();
	ptrCat->makeSound();
	ptrDog->makeSound();
	return (0);
}