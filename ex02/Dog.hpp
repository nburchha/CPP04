#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brain;
	public:
		void makeSound() const;
		void getType() const;
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog();
};