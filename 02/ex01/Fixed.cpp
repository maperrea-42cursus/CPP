/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:39:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/09 19:16:56 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &nb) {
	std::cout << "Copy constructor called" << std::endl;
	value = nb.getRawBits();
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	value = nb * (1 << frac);
}

Fixed::Fixed(const float nb) {
	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(nb * (1 << frac));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat(void) const {
	return (float)value / (float)(1 << frac);
}

int Fixed::toInt(void) const {
	return value / (1 << frac);
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fp) {
	os << fp.toFloat();
	return os;
}
