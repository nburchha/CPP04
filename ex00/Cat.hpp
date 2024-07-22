#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		void makeSound() const;
		void getType() const;
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();
};
