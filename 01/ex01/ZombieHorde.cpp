/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:20:48 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 16:31:27 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombies[i].set_name(name);
	return (zombies);
}
