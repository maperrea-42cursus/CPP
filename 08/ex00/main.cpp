/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:30:15 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/14 17:38:57 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> vec;
	std::list<int> l;

	vec.push_back(2);
	vec.push_back(11);
	vec.push_back(7);
	std::vector<int>::iterator out;
	out = easyfind< std::vector<int> >(vec, 11);
	if (out != vec.end())
		std::cout << *out << std::endl;
	out = easyfind< std::vector<int> >(vec, 6);
	if (out != vec.end())
		std::cout << *out << std::endl;

	l.push_back(1);
	l.push_back(2);

	std::list<int>::iterator out2;
	out2 = easyfind< std::list<int> >(l, 1);
	if (out2 != l.end())
		std::cout << *out2 << std::endl;
	out2 = easyfind< std::list<int> >(l, 3);
	if (out2 != l.end())
		std::cout << *out2 << std::endl;
	
}
