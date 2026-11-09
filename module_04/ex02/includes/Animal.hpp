#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual	~Animal();
		virtual void makeSound() const = 0; //pure virtual function thus making this class an abstract class
		std::string getType() const;
};

#endif

// basically virtual is meant for dynamic binding and late binding.
// how it works is basically delay the binding of function target from compile time to runtime.