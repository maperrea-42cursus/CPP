/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:58:03 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/07 12:32:14 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int n) {
	max_size = n;
}

Span::Span(const Span & copy) {
	*this = copy;
}

Span::~Span() {
}

void Span::addNumber(int n) throw (SpanFullException) {
	if (lst.size() >= max_size)
		throw SpanFullException();
	lst.push_back(n);
}

void Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end) throw (SpanFullException) {
	while(begin != end) {
		this->addNumber(*begin);
		begin++;
	}
}

unsigned int Span::shortestSpan() throw (NoSpanException) {
	unsigned int shortest_span = -1;

	if (lst.size() <= 1)
		throw NoSpanException();
	lst.sort();

	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator next = ++lst.begin();
	std::list<int>::iterator ite = lst.end();
	while (next != ite) {
		if (static_cast<unsigned int>(abs(*next - *it)) < shortest_span)
			shortest_span = *next - *it;
		it++;
		next++;
	}
	return shortest_span;
}

unsigned int Span::longestSpan() throw (NoSpanException) {
	if (lst.size() <= 1)
		throw NoSpanException();
	lst.sort();
	return abs(lst.back() - lst.front());
}

char const * Span::SpanFullException::what() const throw() {
	return "Span is full";
}

char const * Span::NoSpanException::what() const throw() {
	return "Not numbers for a span";
}

Span & Span::operator=(const Span & rhs) {
	if (this == &rhs)
		return *this;
	max_size = rhs.max_size;
	lst = std::list<int>(rhs.lst);
	return *this;
}
