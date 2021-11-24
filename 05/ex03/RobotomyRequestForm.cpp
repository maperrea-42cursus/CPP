#include "RobotomyRequestForm.hpp"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45, "default target") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Robotomy Request Form", 72, 45, target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
	: Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade(), copy.getTarget()) {
}

void RobotomyRequestForm::execute(Bureaucrat const & b) const
	throw (GradeTooLowException, FormNotSignedException) {
	try {
		Form::execute(b);
	} catch (GradeTooLowException & e) {
		throw e;
	} catch (FormNotSignedException & e) {
		throw e;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "brrr... " << std::flush;
		usleep(500000);
	}
	std::cout << std::endl;
	srand(time(NULL));
	int random = rand() % 2;
	if (random)
		std::cout << getTarget() << " has been succesfully robotomized" << std::endl;
	else
		std::cout << "Robotomy on " << getTarget() << " failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
	Form::operator=(rhs);
	return *this;
}
