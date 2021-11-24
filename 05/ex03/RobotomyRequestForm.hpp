#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:

		/* Constructors and destructors */

		RobotomyRequestForm();
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(const RobotomyRequestForm & copy);
		~RobotomyRequestForm();

		/* Member functions */

		void execute(Bureaucrat const & b) const
			throw (GradeTooLowException, FormNotSignedException);

		/* Setters end Getters */


		/* Operator overloads */

		RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

	private:
		
		/* Member variables */


};

#endif
