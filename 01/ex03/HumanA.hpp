/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:39:42 by maperrea          #+#    #+#             */
/*   Updated: 2021/10/28 18:53:06 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();

	private:
		std::string name;
		Weapon& weapon;

};

#endif
