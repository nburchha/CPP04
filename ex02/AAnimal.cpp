#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	return *this;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

std::string AAnimal::getType() const
{
	return _type;
}
