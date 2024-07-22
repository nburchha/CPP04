#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	return *this;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

void Dog::getType() const
{
	std::cout << _type << std::endl;
}
