#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		std::string const &getType() const;
		AMateria* clone() const;
		void use(ICharacter &target);
		Ice();
		Ice(const Ice &copy);
		Ice& operator=(const Ice &copy);
		~Ice();
};