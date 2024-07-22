#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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
