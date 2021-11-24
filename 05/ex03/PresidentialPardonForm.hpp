#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:

		/* Constructors and destructors */

		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(const PresidentialPardonForm & copy);
		~PresidentialPardonForm();

		/* Member functions */

		void execute(Bureaucrat const & b) const
			throw (GradeTooLowException, FormNotSignedException);

		/* Setters end Getters */


		/* Operator overloads */

		PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

	private:
		
		/* Member variables */


};

#endif
