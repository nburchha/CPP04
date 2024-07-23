#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
		if (copy._source[i])
			_source[i] = copy._source[i]->clone();
		else
			_source[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}
