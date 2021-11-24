/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:09 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 15:38:56 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdexcept>
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat {
	public :

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string name, int grade)
			throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
		Bureaucrat(Bureaucrat const & copy);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void promote() throw(Bureaucrat::GradeTooHighException);
		void demote() throw(Bureaucrat::GradeTooLowException);
		void signForm(Form & f) const;
		void executeForm(Form const & f) const;

		Bureaucrat & operator=(Bureaucrat & rhs);
	private:
		
		std::string const name;
		int grade;

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#endif
