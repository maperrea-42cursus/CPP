/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:35:54 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 18:50:37 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}
