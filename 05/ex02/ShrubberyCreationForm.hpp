#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

		/* Constructors and destructors */

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		~ShrubberyCreationForm();

		/* Member functions */


		/* Setters end Getters */


		/* Operator overloads */

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

	private:
		
		/* Member variables */


};

#endif
