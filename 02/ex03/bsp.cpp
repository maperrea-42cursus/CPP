/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:11:49 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 18:55:44 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed s, t;
	Fixed area;

	area = Fixed(0.5f) * (
			-b.gety() * c.getx()
			+ a.gety() * (-b.getx() + c.getx())
			+ a.getx() * (b.gety() - c.gety())
			+ b.getx() * c.gety());
	s = Fixed(1) / (Fixed(2) * area)
			* (a.gety() * c.getx()
				- a.getx() * c.gety()
				+ (c.gety() - a.gety()) * point.getx()
				+ (a.getx() - c.getx()) * point.gety());
	t = Fixed(1) / (Fixed(2) * area)
			* (a.getx() * b.gety()
				- a.gety() * b.getx()
				+ (a.gety() - b.gety()) * point.getx()
				+ (b.getx() - a.getx()) * point.gety());
	if (s > Fixed(0) && t > Fixed(0) && s + t < Fixed(1))
		return true;
	return false;
}
