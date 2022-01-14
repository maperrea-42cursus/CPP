/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:57:56 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/11 16:17:59 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	Span sp1 = Span(10000);
	Span sp2 = Span(10000);
	std::list<int> lst;
	srand(time(NULL));
	
	for (int i = 0; i < 10000; i++) {
		int nbr = rand();
		lst.push_back(nbr);
		sp1.addNumber(nbr);
	}

	sp2.addRange(lst.begin(), lst.end());

	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
