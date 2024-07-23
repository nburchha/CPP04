#include "Character.hpp"

Character::Character() : _name("default")
{
	std::cout << "Character constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character param constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character& Character::operator=(const Character &copy)
{
	if (this == &copy)
		return (*this);
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Slot youre trying to unequip is unused or invalid" << std::endl;
		return ;
	}
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Slot youre trying to use is unequiped or invalid" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
