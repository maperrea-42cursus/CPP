#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria {
	public:

		/* Constructors and destructors */

		Cure();
		Cure(const Cure & copy);
		~Cure();

		/* Member functions */

		AMateria * clone() const;
		void use(ICharacter & target);

		/* Setters end Getters */


		/* Operator overloads */

		Cure & operator=(const Cure & rhs);

	private:
		
		/* Member variables */


};

#endif
