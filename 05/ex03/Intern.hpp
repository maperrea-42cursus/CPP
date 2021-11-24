#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:

		/* Constructors and destructors */

		Intern();
		Intern(const Intern & copy);
		~Intern();

		/* Member functions */

		Form * makeForm(std::string const & type, std::string const & target) const;

		/* Setters end Getters */


		/* Operator overloads */

		Intern & operator=(const Intern & rhs);

	private:
		
		/* Member variables */


};

#endif
