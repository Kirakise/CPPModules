#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->tmp[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		if (copy.tmp[i])
			this->tmp[i] = copy.tmp[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->tmp[i] != NULL)
			delete this->tmp[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (op.tmp[i])
			this->tmp[i] = op.tmp[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && this->tmp[i] != NULL; i++);

	if (i < 4)
		this->tmp[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->tmp[i] != NULL
			&& this->tmp[i]->getType() == type)
				return (this->tmp[i]->clone());
	return (0);
}