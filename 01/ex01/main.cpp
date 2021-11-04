/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:11:19 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 16:37:16 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main()
{
	int n = 5;
	Zombie *zombies = zombieHorde(n, "Frank");

	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
}
