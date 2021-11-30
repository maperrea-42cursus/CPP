/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:02:54 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/30 16:06:18 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap cp;
	ScavTrap lilith("Lilith");
	ClapTrap roland("Roland", 20, 5, 2);
	ClapTrap bloodwing("Bloodwing", 10, 2, 10);
	FragTrap jack("Jack");

	lilith.attack(cp);
	cp.beRepaired(10);
	lilith.guardGate();
	jack.attack(bloodwing);
	jack.attack(roland);
	jack.attack(roland);
	jack.attack(lilith);
	jack.highFiveGuys();
	roland.attack(jack);
	cp.attack("the stairs");
}
