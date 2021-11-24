/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 11:50:26 by maperrea         ###   ########.fr       */
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
}
