/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:02:44 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/10 21:10:40 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:

		/* Constructors and destructors */

		ClapTrap(std::string name = "CL4P-TP", int hit_points = 10,
				int energy_point = 10, int attack_damage = 0);
		ClapTrap(const ClapTrap & copy);
		~ClapTrap();

		/* Member functions */

		void attack(const std::string & target);
		void attack(ClapTrap & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		bool is_dead() const;

		/* Setters and Getters */

		std::string get_name() const;
		int get_hit_points() const;
		int get_energy_points() const;
		int get_attack_damage() const;

		/* Operator overloads */

		ClapTrap & operator=(const ClapTrap & rhs);

	protected:

		/* Member variables */

		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;

};

#endif
