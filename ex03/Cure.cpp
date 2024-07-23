#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure& Cure::operator=(const Cure &copy)
{
	if (this == &copy)
		return (*this);
	AMateria::operator=(copy);
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

std::string const &Cure::getType() const
{
	return (AMateria::getType());
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}