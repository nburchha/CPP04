#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		virtual void makeSound() const = 0;
		std::string getType() const;
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal& operator=(const AAnimal &copy);
		virtual ~AAnimal();
};
