#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type) : type(type) {
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
	return type;
}

AMateria & AMateria::operator=(const AMateria & rhs) {
	this->type = rhs.type;
	return *this;
}
