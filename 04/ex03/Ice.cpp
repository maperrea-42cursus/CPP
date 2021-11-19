#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice & copy) {
	*this = copy;
}

Ice::~Ice() {
}

AMateria * Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}

Ice & Ice::operator=(const Ice & rhs) {
	(void) rhs;
	return *this;
}
