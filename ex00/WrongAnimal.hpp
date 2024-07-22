#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		void makeSound() const;
		std::string getType() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();
};
