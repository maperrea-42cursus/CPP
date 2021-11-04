/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:54:57 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/04 18:07:02 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon* weapon);

	private:
		std::string name;
		Weapon* weapon;

};

#endif
