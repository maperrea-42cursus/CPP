/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:45:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 12:23:55 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:

		class GradeTooLowException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		/* Constructors and destructors */

		Form();
		Form(std::string const & name, int sign_grade, int exec_grade)
			throw (Form::GradeTooLowException, Form::GradeTooHighException);
		Form(const Form & copy);
		~Form();

		/* Member functions */

		void beSigned(Bureaucrat const & b) throw (Form::GradeTooLowException);

		/* Setters end Getters */

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool isSigned() const;

		/* Operator overloads */

		Form & operator=(const Form & rhs);

	private:
		
		/* Member variables */

		std::string const name;
		int const sign_grade;
		int const exec_grade;
		bool is_signed;

};

std::ostream & operator<<(std::ostream & os, Form const & f);

#endif
