#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	return *this;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

void Cat::getType() const
{
	std::cout << _type << std::endl;
}
