/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:47:12 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/04 18:06:29 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

int main()
{
	Weapon club = Weapon("club");
	Weapon mace = Weapon("mace");
	HumanA humana = HumanA("fred", mace);
	HumanB humanb = HumanB("bob");
	humana.attack();
	humanb.attack();
	humanb.setWeapon(&club);
	humanb.attack();
	club.setType("sword");
	mace.setType("longsword");
	humana.attack();
	humanb.attack();
}
