#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:

		/* Constructors and destructors */

		Character();
		Character(std::string name);
		Character(const Character & copy);
		~Character();

		/* Member functions */

		void equip(AMateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		/* Setters end Getters */

		std::string const & getName() const;

		/* Operator overloads */

		Character & operator=(const Character & rhs);

	private:
		
		/* Member variables */

		AMateria * inventory[4];
		std::string name;

};

#endif
