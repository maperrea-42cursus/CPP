/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:40:40 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 18:17:27 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:

		/* Constructors and destructors */

		Point();
		Point(Fixed const x, Fixed const y);
		Point(Point const & copy);
		~Point();

		/* Member functions */


		/* Setters end Getters */

		Fixed const & getx() const;
		Fixed const & gety() const;

		/* Operator overloads */

		Point & operator=(const Point & rhs);

	private:
		
		/* Member variables */

		const Fixed x;
		const Fixed y;

};

#endif
