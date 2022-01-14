#include "Character.hpp"

Character::Character() {
	name = "some NPC";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character & copy) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = copy;
}

Character::~Character() {
	for (int i = 0; i < 4 && inventory[i]; i++)
		delete inventory[i];
}

void Character::equip(AMateria * m) {
	if (!m)
		return;
	int i = 0;
	while (i < 4 && inventory[i])
		i++;
	if (i != 4)
		inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return ;
	inventory[idx] = NULL;
}

void Character::use(int i, ICharacter& target) {
	if (i < 0 || i >= 4 || !inventory[i])
		return;
	inventory[i]->use(target);
}

std::string const & Character::getName() const {
	return name;
}

Character & Character::operator=(const Character & rhs) {
	if (this == &rhs)
		return *this;
	this->name = rhs.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	return *this;
}
