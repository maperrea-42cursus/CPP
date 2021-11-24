/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:18:01 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 12:33:42 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign_grade(1), exec_grade(1), is_signed(false) {
}

Form::Form(std::string const & name, int sign_grade, int exec_grade)
	throw (Form::GradeTooLowException, Form::GradeTooHighException) :
		name(name), sign_grade(sign_grade), exec_grade(exec_grade), is_signed(false) {
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form & copy) :
	name(copy.name), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade), is_signed(copy.is_signed) {
}

Form::~Form() {
}

void Form::beSigned(Bureaucrat const & b) throw (Form::GradeTooLowException)
{
	if (b.getGrade() > sign_grade)
			throw GradeTooLowException();
	is_signed = true;
}

void Form::execute(Bureaucrat const & b) throw (Form::GradeTooLowException, Form::FormNotSignedException) {
	if (b.getGrade() > exec_grade)
		throw GradeTooLowException();
	else if (!is_signed)
		throw FormNotSignedException();
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
	  
const char * Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

std::string Form::getName() const {
	return name;
}

int Form::getSignGrade() const {
	return sign_grade;
}

int Form::getExecGrade() const {
	return exec_grade;
}

bool Form::isSigned() const {
	return is_signed;
}

std::string Form::getTarget() const {
	return target;
}

void Form::setTarget(std::string const & target) {
	this->target = target;
}

Form & Form::operator=(const Form & rhs) {
	is_signed = rhs.is_signed;
	return *this;
}

std::ostream & operator<<(std::ostream & os, Form const & f) {
	if (f.isSigned())
		os << "Form " << f.getName()
			<< ": execution grade " << f.getExecGrade()
			<< ", signing grade " << f.getSignGrade()
			<< ", signed";
	else
		os << "Form " << f.getName()
			<< ": execution grade " << f.getExecGrade()
			<< ", signing grade " << f.getSignGrade()
			<< ", not signed";
	return os;
}
