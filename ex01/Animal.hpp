#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		virtual void makeSound() const;
		std::string getType() const;
		Animal();
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		virtual ~Animal();
};
