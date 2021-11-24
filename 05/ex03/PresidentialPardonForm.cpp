#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("Presidential Pardon Form", 25, 5, "default target") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	: Form("Presidential Pardon Form", 25, 5, target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
	: Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade(), copy.getTarget()) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const & b) const
	throw (GradeTooLowException, FormNotSignedException) {
	try {
		Form::execute(b);
	} catch (GradeTooLowException & e) {
		throw e;
	} catch (FormNotSignedException & e) {
		throw e;
	}
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
	Form::operator=(rhs);
	return *this;
}
