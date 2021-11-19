/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:44 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/18 12:40:15 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "It is a cat!" << std::endl;
}

Cat::Cat(const Cat & copy) {
	*this = copy;
	std::cout << "It is a cat!" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "It was a cat." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

Brain * Cat::getBrain() const {
	return brain;
}

Cat & Cat::operator=(const Cat & rhs) {
	if (this == &rhs)
		return *this;
	this->Animal::operator=(rhs);
	delete this->brain;
	this->brain = new Brain(*rhs.brain);

	return *this;
}
