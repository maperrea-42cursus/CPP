/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:56:03 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/04 18:04:27 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) :
	name(name), weapon(NULL)
{
}

HumanB::~HumanB () {
}

void HumanB::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}


void HumanB::attack() {
	if (this->weapon)
		std::cout << this->name << " attacks with his "
			<< this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his bare fists" << std::endl;
}
