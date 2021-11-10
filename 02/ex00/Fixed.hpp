/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:33:59 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/09 17:52:42 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &nb);

		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed &operator=(Fixed const &rhs);
	private:
		int value;
		static const int frac = 8;
};

#endif
