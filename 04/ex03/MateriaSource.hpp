#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:

		/* Constructors and destructors */

		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		~MateriaSource();

		/* Member functions */

		void learnMateria(AMateria * m);
		AMateria * createMateria(std::string const & type);

		/* Setters end Getters */


		/* Operator overloads */

		MateriaSource & operator=(const MateriaSource & rhs);

	private:
		
		/* Member variables */

		AMateria * knownMateria[4];

};

#endif
