#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	return *this;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}