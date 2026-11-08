#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

	std::cout << "\n== Wrong Animal Test ==\n" <<'\n';
	WrongAnimal	*ptrWrongAnimal = new WrongAnimal();
	WrongAnimal	*ptrWrongCat = new WrongCat();

	std::cout << "Animal type: " << ptrWrongAnimal->getType() << '\n';
	std::cout << "Animal type: " << ptrWrongCat->getType() << '\n';
	ptrWrongAnimal->makeSound();
	ptrWrongCat->makeSound(); // WrongAnimal makesound will be called due to function target binding at compile time
	delete (ptrAnimal);
	delete (ptrCat);
	delete (ptrDog);
	delete (ptrWrongAnimal);
	delete (ptrWrongCat);
	return (0);
}