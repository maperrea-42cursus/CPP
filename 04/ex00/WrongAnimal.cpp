/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:30 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/12 15:12:22 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("wrong unknown creature") {
	std::cout << "New WrongAnimal Created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type) : type(type) {
	std::cout << "New WrongAnimal Created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy) : type(copy.getType()) {
	std::cout << "WrongAnimal Copied" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "An WrongAnimal has died" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Weird sounds echo around you" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs) {
	type = rhs.type;

	return *this;
}
