#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual	~WrongAnimal(); // still have to use virtual here because if we dont use it, the destructor of the derived class will not be called when we delete a pointer to the base class
		void makeSound() const; // virtual is not used here because we want to test what happens if we dont use it
		std::string getType() const;
};

#endif