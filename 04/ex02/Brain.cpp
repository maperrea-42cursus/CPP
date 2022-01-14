/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:34 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/08 11:12:55 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "New brain created" << std::endl;
}

Brain::Brain(const Brain & copy) {
	std::cout << "Brain copied" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(const Brain & rhs) {
	if (this == &rhs)
		return *this;
	for (size_t i = 0; i < rhs.ideas->length(); i ++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
