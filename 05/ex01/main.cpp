/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/08 15:29:32 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Form f("A23", 25, 32);
	Bureaucrat bob("Bob", 30);
	Bureaucrat john("John", 17);

	bob.signForm(f);
	john.signForm(f);
	try {
		Form a("C1", 0, 32);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form a("C1", 152, 32);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
