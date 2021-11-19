#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		knownMateria[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & copy) {
	for (int i = 0; i < 4; i++)
		knownMateria[i] = NULL;
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4 && knownMateria[i]; i++)
		delete knownMateria[i];
}

void MateriaSource::learnMateria(AMateria * m) {
	int i = 0;
	while (i < 4 && knownMateria[i])
		i++;
	if (i != 4)
		knownMateria[i] = m->clone();
}

AMateria * MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (i < 4 && knownMateria[i]) {
		if (knownMateria[i]->getType() == type)
			return knownMateria[i]->clone();
		i++;
	}
	return NULL;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) {
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (knownMateria[i])
			delete knownMateria[i];
		if (rhs.knownMateria[i])
			knownMateria[i] = rhs.knownMateria[i]->clone();
		else
			knownMateria[i] = NULL;
	}
	return *this;
}
