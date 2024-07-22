#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		void makeSound() const;
		void getType() const;
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog();
};