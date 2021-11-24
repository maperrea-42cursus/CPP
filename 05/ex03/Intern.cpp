#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern & copy) {
	(void) copy;
}

Intern::~Intern() {
}

Form * Intern::makeForm(std::string const & type, std::string const & target) const {
	std::string types[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int i = 0;

	while (i < 3 && types[i].compare(type))
		i++;
	switch (i) {
		case 0 :
			std::cout << "Intern makes Shrubbery Creation form" << std::endl;
			return new ShrubberyCreationForm(target);
		case 1 :
			std::cout << "Intern makes Robotomy Request form" << std::endl;
			return new RobotomyRequestForm(target);
		case 2 :
			std::cout << "Intern makes Presidential Pardon form" << std::endl;
			return new PresidentialPardonForm(target);
		default:
			std::cout << "Intern doesn't know how to create form \"" << type << "\"" << std::endl;
			return NULL;;
	}
}

Intern & Intern::operator=(const Intern & rhs) {
	(void) rhs;
	return *this;
}
