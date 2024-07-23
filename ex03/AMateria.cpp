#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

AMateria& AMateria::operator=(const AMateria &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "Target cannot be used!" << std::endl;
}
