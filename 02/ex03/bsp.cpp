/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:11:49 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/28 15:13:21 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define X getx()
#define Y gety()

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed s, t;
	Fixed area;

	area = Fixed(0.5f) * (-b.Y * c.X + a.Y * (-b.X + c.X) + a.X * (b.Y - c.Y) + b.X * c.Y);
	s = Fixed(1) / (Fixed(2) * area) * (a.Y * c.X - a.X * c.Y + (c.Y - a.Y) * point.X + (a.X - c.X) * point.Y);
	t = Fixed(1) / (Fixed(2) * area) * (a.X * b.Y - a.Y * b.X + (a.Y - b.Y) * point.X + (b.X - a.X) * point.Y);
	if (s > Fixed(0) && t > Fixed(0) && s + t < Fixed(1))
		return true;
	return false;
}

#undef X
#undef Y
