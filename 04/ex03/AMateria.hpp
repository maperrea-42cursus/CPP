#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class ICharacter;

class AMateria {
	public:

		/* Constructors and destructors */

		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & copy);
		virtual ~AMateria();

		/* Member functions */

		std::string const & getType() const;

		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter & target) = 0;

		/* Setters end Getters */


		/* Operator overloads */

		AMateria & operator=(const AMateria & rhs);

	protected:
		
		/* Member variables */

		std::string type;

};

#endif
