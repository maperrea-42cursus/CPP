/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:02:51 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/10 20:26:11 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name, int hit_points,
		int energy_points, int attack_damage) {
	this->name = name;
	this->hit_points = hit_points;
	this->energy_points = energy_points;
	this->attack_damage = attack_damage;
	std::cout << "ClapTrap " << this->name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) {
	this->name = copy.get_name();
	this->hit_points = copy.get_hit_points();
	this->energy_points = copy.get_energy_points();
	this->attack_damage = copy.get_attack_damage();
	std::cout << "ClapTrap " << this->name << " has been copied" << std::endl;
}

ClapTrap::~ClapTrap() {
		std::cout << "ClapTrap " << this->name
			<< " has disappeared in Pandora's depths" << std::endl;
}

void ClapTrap::attack(const std::string & target) {
	std::cout << "ClapTrap " << this->name 
		<< " attacks " << target
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
}

void ClapTrap::attack(ClapTrap & target) {
	if (this->is_dead()) {
		std::cout << "ClapTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but is dead!" << std::endl;
		return ;
	} else if (target.is_dead()) { 
		std::cout << "ClapTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but it is already dead!" << std::endl;
		return ;
	} else if (this->energy_points <= 0) {
		std::cout << "ClapTrap " << this->name 
			<< " tries to attack " << target.get_name() 
			<< " but has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name 
		<< " attacks " << target.get_name()
		<< " for " << this->attack_damage 
		<< " points of damage" << std::endl;
	target.takeDamage(this->attack_damage);
	this->energy_points--;
	std::cout << "ClapTrap " << this->name 
		<< " has " << this->energy_points 
		<< " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name 
		<< " takes " << amount
		<< " points of damage and has " << this->hit_points
		<< " hit points left" << std::endl;
	if (this->is_dead())
		std::cout << "ClapTrap " << this->name << " dies" << std::endl;
} 

void ClapTrap::beRepaired(unsigned int amount) {
	bool dead = this->is_dead();

	this->hit_points += amount;
	std::cout << "ClapTrap " << this->name 
		<< " gets repaired by " << amount
		<< " hit points and has now " << this->hit_points
		<< " hit points" << std::endl;
	if (dead)
		std::cout << "ClapTrap " << this->name << " got revived" << std::endl;
}

bool ClapTrap::is_dead() const {
	if (this->hit_points <= 0)
		return true;
	return false;
}

std::string ClapTrap::get_name() const {
	return this->name;
}

int ClapTrap::get_hit_points() const {
	return this->hit_points;
}

int ClapTrap::get_energy_points() const {
	return this->energy_points;
}

int ClapTrap::get_attack_damage() const {
	return this->attack_damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs) {
	this->name = rhs.get_name();
	this->hit_points = rhs.get_hit_points();
	this->energy_points = rhs.get_energy_points();
	this->attack_damage = rhs.get_attack_damage();
	return *this;
}
