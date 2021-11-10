/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:33:59 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/09 19:10:36 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &nb);
		Fixed(const int nb);
		Fixed(const float nb);

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		Fixed &operator=(Fixed const &rhs);

	private:
		int value;
		static const int frac = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fp);

#endif
