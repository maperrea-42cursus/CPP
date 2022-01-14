/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:59:56 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/01 16:07:48 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:

		/* Constructors and destructors */

		DiamondTrap(std::string name = "DI4-TP", int hit_points = 100,
				int energy_points = 50, int attack_damage = 30);
		DiamondTrap(const DiamondTrap & copy);
		~DiamondTrap();

		/* Member functions */

		void attack(const std::string & target);
		void attack(ClapTrap & target);
		void whoAmI() const;

		/* Setters end Getters */

		std::string get_name() const;

		/* Operator overloads */

		DiamondTrap & operator=(const DiamondTrap & rhs);

	private:
		
		/* Member variables */

		std::string name;

};

#endif
