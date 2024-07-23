#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal*	pets[6];

	for (int i = 0; i < 6; i++)\
	{
		if (i > 2)
			pets[i] = new Cat;
		else
			pets[i] = new Dog;
	}
	for (int i = 0; i < 6; i++)
		pets[i]->makeSound();

	for (int i = 0; i < 6; i++)
		delete (pets[i]);
	return 0;
}
