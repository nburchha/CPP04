#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria();
		AMateria(std::string const &type);
		AMateria& operator=(const AMateria& copy);
		AMateria(const AMateria& copy);
		virtual ~AMateria();
};
