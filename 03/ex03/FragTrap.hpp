/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:39:28 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 15:25:19 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
	public:

		/* Constructors and destructors */

		FragTrap(std::string name = "FR4G-TP", int hit_points = 100,
				int energy_points = 100, int attack_damage = 30);
		FragTrap(const FragTrap & copy);
		~FragTrap();

		/* Member functions */

		void attack(const std::string & target);
		void attack(ClapTrap & target);
		void highFiveGuys();

		/* Setters end Getters */


		/* Operator overloads */

		FragTrap & operator=(const FragTrap & rhs);

	private:
		
		/* Member variables */


};

#endif
