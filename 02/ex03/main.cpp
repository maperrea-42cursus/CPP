/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:50:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 18:57:28 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	std::cout << bsp(
			Point(Fixed(0), Fixed(0)),
			Point(Fixed(0), Fixed(1)),
			Point(Fixed(1), Fixed(0)),
			Point(Fixed(0.5f), Fixed(0.5f))) << std::endl;
}
