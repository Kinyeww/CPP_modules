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
		virtual void makeSound() const; // using virtual because of runtime polymorphism
		std::string getType() const;
};

#endif