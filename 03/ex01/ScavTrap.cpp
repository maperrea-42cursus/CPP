/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:07:52 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 15:26:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name, int hit_points,
		int energy_points, int attack_damage)
	: ClapTrap(name, hit_points, energy_points, attack_damage) {
	std::cout << this->name << " is a ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy) {
	std::cout << this->name << " is a ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " has fallen in battle" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string & target) {
	std::cout << "ScavTrap " << this->name 
		<< " attacks " << target
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
}

void ScavTrap::attack(ClapTrap & target) {
	if (this->is_dead()) {
		std::cout << "ScavTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but is dead!" << std::endl;
		return ;
	} else if (target.is_dead()) { 
		std::cout << "ScavTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but it is already dead!" << std::endl;
		return ;
	} else if (this->gate_keeper) {
		std::cout << "ScavTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but is guarding the gate" << std::endl;
		return ;
	}
	if (this->energy_points <= 0) {
		std::cout << "ScavTrap " << this->name 
			<< " has no energy points left but he doesn't care!" << std::endl;
	}
	std::cout << "ScavTrap " << this->name 
		<< " assaults " << target.get_name()
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
	target.takeDamage(this->attack_damage);
	this->energy_points--;
	std::cout << "ScavTrap " << this->name 
		<< " has " << this->energy_points 
		<< " energy points left" << std::endl;
}

void ScavTrap::guardGate() {
	this->gate_keeper = true;
	std::cout << "ScavTrap " << this->name
		<< " starts guarding the gate" << std::endl;
}
