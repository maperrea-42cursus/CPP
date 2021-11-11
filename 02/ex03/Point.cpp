/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:40:40 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 18:55:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {
}

Point::Point(const Point & copy) : x(copy.getx()), y(copy.gety()) {
}

Fixed const & Point::getx() const {
	return x;
}

Fixed const & Point::gety() const {
	return y;
}

Point::~Point() {
}

Point & Point::operator=(const Point & rhs) {
	(void)rhs;
	return *this;
}
