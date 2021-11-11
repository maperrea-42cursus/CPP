/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:21:46 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 15:42:19 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name, int hit_points,
		int energy_points, int attack_damage)
	:	ClapTrap(name + "_clap_name", hit_points, energy_points, attack_damage),
		ScavTrap(), FragTrap(), name(name) {
	std::cout << "Actually, " << this->name << " is a DiamondTrap!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & copy)
	: ClapTrap(copy), ScavTrap(), FragTrap(), name(copy.get_name()) {
	std::cout << "Actually, " << this->name << " is a DiamondTrap!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " is no more!" << std::endl;
}

std::string DiamondTrap::get_name() const {
	return name;
}

void DiamondTrap::attack(const std::string & target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::attack(ClapTrap & target) {
	this->ScavTrap::attack(target);
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & rhs) {
	ClapTrap::operator=(rhs);
	this->name = rhs.get_name();
	return *this;
}
