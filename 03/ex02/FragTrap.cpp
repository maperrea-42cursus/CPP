/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:39:29 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 15:23:51 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name, int hit_points,
		int energy_points, int attack_damage) 
	: ClapTrap(name, hit_points, energy_points, attack_damage) {
	std::cout << this->name << " is a FragTrap!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy) : ClapTrap(copy) {
	std::cout << this->name << " is a FragTrap!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " has exploded into bits!" << std::endl;
}

void FragTrap::attack(const std::string & target) {
	std::cout << "FragTrap " << this->name 
		<< " attacks " << target
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
}

void FragTrap::attack(ClapTrap & target) {
	if (this->is_dead()) {
		std::cout << "FragTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but is dead!" << std::endl;
		return ;
	} else if (target.is_dead()) { 
		std::cout << "FragTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but it is already dead!" << std::endl;
		return ;
	} else if (this->energy_points <= 0) {
		std::cout << "FragTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name 
		<< " shoot a laser beam at " << target.get_name()
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
	target.takeDamage(this->attack_damage);
	this->energy_points--;
	std::cout << "FragTrap " << this->name 
		<< " has " << this->energy_points 
		<< " energy points left" << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << this->name << ": \"Give me a high five!\"" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}
