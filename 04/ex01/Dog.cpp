/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:45 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/01 17:35:20 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
	brain = new Brain();
	std::cout << "It is a dog!" << std::endl;
}

Dog::Dog(const Dog & copy) {
	brain = NULL;
	*this = copy;
	std::cout << "It is a dog!" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "It was a dog." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

Brain * Dog::getBrain() const {
	return brain;
}

Dog & Dog::operator=(const Dog & rhs) {
	if (this == &rhs)
		return *this;
	this->Animal::operator=(rhs);
	delete this->brain;
	this->brain = new Brain(*rhs.brain);

	return *this;
}
