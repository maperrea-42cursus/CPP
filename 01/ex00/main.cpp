/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:11:19 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 16:19:07 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie *zombie = newZombie("Frank");
	randomChump("Mark");
	zombie->announce();
	randomChump("David");
	delete zombie;
	return 0;
}
