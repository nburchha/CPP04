#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		std::string const &getType() const;
		AMateria* clone() const;
		void use(ICharacter &target);
		Cure();
		Cure(const Cure &copy);
		Cure& operator=(const Cure &copy);
		~Cure();
};
