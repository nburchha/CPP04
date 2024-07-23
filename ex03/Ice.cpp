#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice& Ice::operator=(const Ice &copy)
{
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

std::string const &Ice::getType() const
{
	return (AMateria::getType());
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
