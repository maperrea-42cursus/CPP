/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:02:54 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/10 20:26:38 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap cp;
	ClapTrap lilith("Lilith");
	ClapTrap roland("Roland", 20, 5, 2);
	ClapTrap bloodwing("Bloodwing", 10, 2, 10);
	ClapTrap jack("Jack", 30, 2, 20);

	lilith.attack(cp);
	cp.beRepaired(10);
	jack.attack(bloodwing);
	jack.attack(roland);
	jack.attack(roland);
	jack.attack(lilith);
	roland.attack(jack);
	cp.attack("the stairs");
}
