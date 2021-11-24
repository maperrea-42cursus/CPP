#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

		/* Constructors and destructors */

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		~ShrubberyCreationForm();

		/* Member functions */

		void execute(Bureaucrat const & b) const
			throw (GradeTooLowException, FormNotSignedException);

		/* Setters end Getters */


		/* Operator overloads */

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

	private:
		
		/* Member variables */


};

#endif
