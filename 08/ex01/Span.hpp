/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:58:03 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/07 12:23:58 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <stdexcept>
#include <stdlib.h>
#include <list>

class Span {
	public:

		class SpanFullException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		class NoSpanException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		/* Constructors and destructors */

		Span(unsigned int n);
		Span(const Span & copy);
		~Span();

		/* Member functions */

		void addNumber(int n) throw (SpanFullException);
		void addRange(std::list<int>::iterator begin, std::list<int>::iterator end) throw (SpanFullException);
		unsigned int shortestSpan() throw (NoSpanException);
		unsigned int longestSpan() throw (NoSpanException);

		/* Setters and Getters */


		/* Operator overloads */

		Span & operator=(const Span & rhs);

	private:
		
		/* Member variables */

		std::list<int> lst;
		unsigned int max_size;
};

#endif
