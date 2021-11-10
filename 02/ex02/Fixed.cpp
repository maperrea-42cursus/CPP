/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:39:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/10 16:15:45 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(Fixed const &nb) {
	value = nb.getRawBits();
}

Fixed::Fixed(const int nb) {
	value = nb * (1 << frac);
}

Fixed::Fixed(const float nb) {
	value = (int)roundf(nb * (1 << frac));
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

float Fixed::toFloat(void) const {
	return (float)value / (float)(1 << frac);
}

int Fixed::toInt(void) const {
	return value / (1 << frac);
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs)
		value = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const &rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);

	this->value++;
	return copy;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);

	this->value--;
	return copy;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fp) {
	os << fp.toFloat();
	return os;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a > b)
		return b;
	return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a > b)
		return b;
	return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}
