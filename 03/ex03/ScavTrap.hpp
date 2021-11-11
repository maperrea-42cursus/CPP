/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:07:53 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 14:50:32 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:

		/* Constructors and destructors */

		ScavTrap(std::string name = "SC4V-TP", int hit_points = 100,
				int energy_points = 50, int attack_damage = 20);
		ScavTrap(const ScavTrap & copy);
		~ScavTrap();

		/* Member functions */

		void attack(const std::string & target);
		void attack(ClapTrap & target);
		void guardGate();

		/* Setters end Getters */


		/* Operator overloads */

		ScavTrap & operator=(const ScavTrap & rhs);

	private:
		
		/* Member variables */

		bool gate_keeper;

};

#endif
