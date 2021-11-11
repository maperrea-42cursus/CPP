/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:44 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:26:10 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "It is a cat!" << std::endl;
}

Cat::Cat(const Cat & copy) : Animal(copy) {
	std::cout << "It is a cat!" << std::endl;
}

Cat::~Cat() {
	std::cout << "It was a cat." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs) {
	this->Animal::operator=(rhs);

	return *this;
}
