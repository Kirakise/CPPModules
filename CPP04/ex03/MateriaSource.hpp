#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria* tmp[4];
    public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    virtual ~MateriaSource();
    MateriaSource &operator=(const MateriaSource& op);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};