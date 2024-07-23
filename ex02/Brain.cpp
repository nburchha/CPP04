#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called.\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called.\n";
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain default deconstructor called.\n";
}
