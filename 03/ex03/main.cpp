/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:02:54 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 16:07:19 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
	ClapTrap cp;
	ScavTrap lilith("Lilith");
	DiamondTrap roland("Roland");
	DiamondTrap roland2(roland);
	DiamondTrap roland3;
	ClapTrap bloodwing("Bloodwing", 10, 2, 10);
	FragTrap jack("Jack");

	roland3 = roland;
	std::cout << "Roland3's name is now " << roland3.get_name() << std::endl;
	std::cout << "Roland3's _clap_name is now "
		<< roland3.ClapTrap::get_name() << std::endl;
	std::cout << "Roland2's energy is " << roland2.get_energy_points() << std::endl;
	roland2.guardGate();
	roland2.highFiveGuys();
	lilith.attack(cp);
	cp.beRepaired(10);
	lilith.guardGate();
	jack.attack(bloodwing);
	jack.attack(roland);
	jack.attack(roland);
	jack.attack(lilith);
	roland.attack(jack);
	cp.attack("the stairs");
}
