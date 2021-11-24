/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:44:52 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 17:08:41 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NPC"), grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException) : name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : name(copy.name), grade(copy.grade) {
}

Bureaucrat::~Bureaucrat() {
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade can't be above 1";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade can't be under 150";
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::promote() throw(Bureaucrat::GradeTooHighException) {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::demote() throw(Bureaucrat::GradeTooLowException) {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form & f) const {
	try {
		f.beSigned(*this);
	} catch (std::exception & e) {
		std::cout << *this << " cannot sign " << f << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << *this << " signs " << f << std::endl;
}

void Bureaucrat::executeForm(Form const & f) const {
	try {
		std::cout << name << " executes Form " << f.getName() << std::endl;
		f.execute(*this);
	} catch (std::exception & e) {
		std::cout << f << " could not be executed by " << *this << " because " << e.what() << std::endl;
		return;
	}
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & rhs) {
	this->grade = rhs.grade;
	return *this;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
