#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		void makeSound() const;
		void getType() const;
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();
};
