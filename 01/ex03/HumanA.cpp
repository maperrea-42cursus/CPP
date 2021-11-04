/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:45:03 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 18:57:49 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) :
	name(name), weapon(weapon) 
{
}

HumanA::~HumanA () {
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his "
		<< this->weapon.getType() << std::endl;
}
