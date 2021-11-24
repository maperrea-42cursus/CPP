/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 17:56:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	Intern corenting;
	Bureaucrat bob("Bob", 150);
	Bureaucrat john("John", 17);

	Form * f = corenting.makeForm("Shrubbery Creation", "tree");
	std::cout << *f << std::endl;
	bob.signForm(*f);
	john.executeForm(*f);
	john.signForm(*f);
	bob.executeForm(*f);
	john.executeForm(*f);

	delete f;

	f = corenting.makeForm("Robotomy Request", "Bob");
	john.signForm(*f);
	john.executeForm(*f);

	delete f;

	f = corenting.makeForm("Presidential Pardon", "Bob");
	Bureaucrat zafod_beeblebrox("Zafod Beeblebrox", 5);
	john.signForm(*f);
	zafod_beeblebrox.executeForm(*f);
	delete f;

	f = corenting.makeForm("Form", "Bob");
}
