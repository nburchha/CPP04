#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void makeSound() const;
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &copy);
		~WrongCat();
};
