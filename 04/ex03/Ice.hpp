#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria {
	public:

		/* Constructors and destructors */

		Ice();
		Ice(const Ice & copy);
		~Ice();

		/* Member functions */

		AMateria * clone() const;
		void use(ICharacter & target);

		/* Setters end Getters */


		/* Operator overloads */

		Ice & operator=(const Ice & rhs);

	private:
		
		/* Member variables */


};

#endif
