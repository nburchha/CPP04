#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	brain = new Brain(*(copy.brain));
	return *this;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
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
