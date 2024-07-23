#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	brain = new Brain(*(copy.brain));
	return *this;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
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
