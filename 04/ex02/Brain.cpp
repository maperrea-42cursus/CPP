/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:34 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/12 15:55:20 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(const Brain & copy) {
	*this = copy;
}

Brain::~Brain() {
}

Brain & Brain::operator=(const Brain & rhs) {
	if (this == &rhs)
		return *this;
	for (size_t i = 0; i < rhs.ideas->length(); i ++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
