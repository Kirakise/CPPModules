#include "AMateria.hpp"


AMateria::AMateria(std::string const &type) : type(type), _xp(0){
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType() const {
    return this->type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}
