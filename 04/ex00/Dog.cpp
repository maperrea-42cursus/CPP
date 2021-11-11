/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:45 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:22:18 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "It is a dog!" << std::endl;
}

Dog::Dog(const Dog & copy) : Animal(copy) {
	std::cout << "It is a dog!" << std::endl;
}

Dog::~Dog() {
	std::cout << "It was a dog." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs) {
	this->Animal::operator=(rhs);

	return *this;
}
