/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/23 14:42:40 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat john("John", 127);
	std::cout << john << std::endl;
	john.promote();
	std::cout << john << std::endl;
	john.demote();
	john.demote();
	std::cout << john << std::endl;
	try {
		Bureaucrat dave("Dave", 0);
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;;
	}
	try {
		Bureaucrat rob("Rob", 151);
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;;
	}
	try {
		Bureaucrat peter("Peter", 150);
		peter.demote();
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;;
	}
	try {
		Bureaucrat michael("Michael", 1);
		michael.promote();
	} catch (std::exception const & e) {
		std::cout << e.what() << std::endl;;
	}
}
